#' Run (parallel) grid search for addm fits using foreach loops
#' \code{addm_gridsearch_foreach}
#' @author Alexander Fengler, \email{alexanderfengler@@gmx.de}
#' @title Run grid search (parallel)
#' @return data.table with log likelihoods and corresponding parameter combinations
#' @export
#' @inheritParams addm_fit_grid
#' @param parameter.matrix matrix that provides the parameter space which is looped over. (drifts, thetas, sds, non decision times / potentially gammas when using multiattribute case)
#' @param nr.attributes integer providing the amount of attributes we consider per item

addm_support_gridsearch_foreach = function(choice.dat = data.table(v1 = 0, v2 = 0, rt = 0, decision = 0, id = 0),
                                           eye.dat = data.table(fixloc = 0, fixdur = 0, fixnr = 1, id = 0),
                                           conditions.dat = data.table(v1 = 0, v2 = 0, id = 0),
                                           parameter.matrix = c(0.006,0.6,1,0.06,0),
                                           nr.attributes = 1,
                                           boundaryfun = 1,
                                           nr.reps = 1000,
                                           timestep = 10,
                                           model.type = 'standard',
                                           fixation.model = 'fixedpath',
                                           fit.type = 'condition',
                                           log.file = 'defaultlog.txt',
                                           state.step = 0.1){
  # Initialize iterator and output list --------------------------------------------------------------------------------------------------
  out = list(0)
  ita = iter(parameter.matrix,by="row")
  # --------------------------------------------------------------------------------------------------------------------------------------

  # RUN FIT ------------------------------------------------------------------------------------------------------------------------------
  sink(log.file,append=TRUE)

  if (fit.type == "trial"){
    out[[1]] = foreach (i = ita,.combine='rbind') %dopar% addm_run_by_trial(choice.dat,
                                                                            eye.dat,
                                                                            i,
                                                                            nr.attributes,
                                                                            boundaryfun,
                                                                            nr.reps,
                                                                            timestep,
                                                                            model.type)

  } else if (fit.type == 'condition'){
    out[[1]] = foreach (i = ita,.combine='rbind') %dopar% addm_run_by_condition(choice.dat,
                                                                                conditions.dat,
                                                                                i,
                                                                                nr.attributes,
                                                                                boundaryfun,
                                                                                nr.reps,
                                                                                timestep,
                                                                                model.type,
                                                                                output.type = 'fit',
                                                                                fixation.model)

  } else if (fit.type == 'dyn'){
    out[[1]] = foreach (i = ita,.combine='rbind') %dopar% addm_run_by_trial_dynamic(choice.dat,
                                                                                    eye.dat,
                                                                                    i,
                                                                                    nr.attributes,
                                                                                    boundaryfun,
                                                                                    timestep,
                                                                                    state.step)
  }
  # --------------------------------------------------------------------------------------------------------------------------------------

  # Reset sinks to restore output to console ---------------------------------------------------------------------------------------------
  cur.sink.num = sink.number()
  for (z in 1:cur.sink.num){
    sink(NULL)
  }
  # --------------------------------------------------------------------------------------------------------------------------------------

  # Format and return output -------------------------------------------------------------------------------------------------------------
  print(out)
  temp = do.call(rbind,out)

  out.names = c('non.decision.time', 'drift', 'sd', 'theta', 'gamma', 'scalar_item_not_seen_drift', 'scalar_item_not_seen_noise','loglik')
  out = as.data.table(out[[1]])
  setnames(out,out.names)

  return(out)
  # --------------------------------------------------------------------------------------------------------------------------------------
}
