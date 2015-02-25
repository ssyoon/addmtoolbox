#' Produce model fit visualization
#' @author Alexander Fengler, \email{alexanderfengler@@gmx.de}
#' @title Plot modelfit
#' @return Returns a list of two ggplot objects. plot.coarse.grid stores a plot corresponding to coarse grid fits. plot.fine.grid analogously for fine grid fits
#' \code{addm_plot_loglik} Returns data.table with log likelihoods by parameter combination
#' @export
#' @param logliks 'data.frame' or 'data.table' storing parameter values and corresponding log likelihoods as a result of a model fit.

addm_plot_loglik = function(logliks = data.table(drift = 0, theta = 0, sd = 0, non.decision.time = 0, nr.reps = 0, loglik = 0)){

logliks = as.data.table(logliks)
setkey(logliks,loglik)

print(logliks[length(logliks[,drift]),])

p.coarse = ggplot(data = logliks[logliks$coarse == 1,], aes(y=loglik,x=sd,group = as.factor(theta),color=as.factor(theta)))  +
  facet_wrap(~ drift) + theme_bw() +
  geom_line()

if (any(logliks[,coarse] == 0)){
p.fine = ggplot(data = logliks[logliks$coarse == 0,], aes(y=loglik,x=sd,group = as.factor(theta),color=as.factor(theta)))  +
  facet_wrap(~ drift) +
  theme_bw() + geom_line()

return(list(plot.coarse.grid = p.coarse,
            plot.fine.grid = p.fine))
}

return(list(plot.coarse.grid = p.coare,
            plot.fine.grid = 'Fine grid not supplied because absent in model fit'))

}

