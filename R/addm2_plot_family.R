#' Generate standard psychometric plots for addm model-fit analysis
#' \code{addm_plot_family}
#' @param choice.dat data.table storing the item valuations (v1,v2...), reaction times in ms (rt), decisions (decision), trialids (id) and condition ids (condition_id).
#' @param eye.dat data.table storing eyetracking data by trial. Fixation location (fixloc), Fixation number (fixnr), Fixation duration (fixdur) and an id column (id). Not strictly neccessary at the moment (not plot currently uses it) and can be run as default.
#' @param addm.output data.table that stores detailed addm.output (as generated by addm_run_by_condition)
#' @author Alexander Fengler, \email{alexanderfengler@@gmx.de}
#' @title Generate standard psychometric plots for addm model-fit analyis
#' @return List of ggplot objects (plots). Costumizable.
#' @export
addm2_plot_family = function(choice.dat = data.table(v1 = 0,v2 = 0, rt = 0, decision = 0, id = 0),
                             eye.dat = data.table(fixloc = 0,fixnr = 1, fixdur = 0, id = 0),
                             addm.output = data.table(a = 0,b = 0)){


  # General Data Initialization -------------------------------------------------------------------------
  choice.dat = as.data.table(choice.dat)
  eye.dat = as.data.table(eye.dat)
  addm.output = as.data.table(addm.output)
  choice.dat$val.diff = choice.dat$v1 - choice.dat$v2

  # Get val.diff (relative valuation of the first item) over to the addm output frame
  temp = choice.dat %>% group_by(condition_id) %>% summarise(v1 = unique(v1),
                                                   v2 = unique(v2),
                                                   val.diff = unique(val.diff))
  setkey(addm.output,condition_id)
  setkey(temp,condition_id)
  addm.output = temp[addm.output]
  # -----------------------------------------------------------------------------------------------------

  # PLOT 1
  # Probability item is chosen by relative valuation of item --------------------------------------------
  # Compute subframe providing likelihood of item 1 chosen by val.diff
  # For addm output
  addm.p.choice = addm.output %>% group_by(val.diff) %>%
    mutate(decision.1 = ifelse(decision == 1,1,0)) %>%
    group_by(val.diff) %>%
    summarise(count = n(), count.decision.1 = sum(decision.1)) %>%
    mutate(p.1 = count.decision.1/count)

  # For real choice data
  real.p = choice.dat %>% group_by(val.diff) %>%
    mutate(decision.1 = ifelse(decision == 1,1,0)) %>%
    group_by(val.diff) %>%
    summarise(count = n(), count.decision.1 = sum(decision.1)) %>%
    mutate(p.1 = count.decision.1/count) %>% filter(count > 100)

  # Generate Plot
  plot.choice.by.val.diff = ggplot(data=addm.p.choice,aes(x = val.diff, y=p.1)) +
    geom_line(data=addm.p.choice,color="red",linetype="dashed") +
    geom_line(data=real.p,color="black",linetype="dashed") +
    geom_point(data=real.p,color='black',shape=0) +
    theme_bw(base_size = 10) +
    ylab("Probability Item 1 is chosen") +
    xlab('Relative Value of Item 1') + scale_color_manual(values=c('black','red'))
  # -----------------------------------------------------------------------------------------------------

  # PLOT 2
  # RT vs. difficulty -----------------------------------------------------------------------------------
  addm.rt.by.difficulty = addm.output %>% group_by(val.diff) %>% summarise(rt = mean(rt))
  real.rt.by.difficulty = choice.dat %>% group_by(val.diff) %>% summarise(rt = mean(rt),count = n()) %>% filter(count >= 100)

  plot.rt.by.difficulty = ggplot(data = addm.rt.by.difficulty, aes(x = val.diff, y = rt)) +
    geom_line(data = addm.rt.by.difficulty, color='red',linetype='dashed') +
    geom_line(data=real.rt.by.difficulty,color="black",linetype="dashed") +
    geom_point(data=real.rt.by.difficulty,color='black',shape=0) +
    theme_bw(base_size = 10) +
    ylab("Mean Reaction Time") +
    xlab('Value Difference of Items Presented') + scale_color_manual(values=c('black','red'))
  # -----------------------------------------------------------------------------------------------------


  return(list(plot.choice.by.val.diff,
              plot.rt.by.difficulty))
}
