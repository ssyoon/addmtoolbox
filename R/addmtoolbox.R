#' addmtoolbox: Fit (attentional) drift diffusion models
#'
#' The addmtoolbox package provides six categories of functions:
#' addm_dataprep(), addm_run_...(), addm_fit_...(), addm_plot_...(), addm_support_...(), aevacc_...().
#'
#' @section addm_dataprep():
#' This function gets your data in shape for easy usage with the other functions in the package.
#' It is not strictly necessary to use it, however strongly recommended for predictable behavior.
#'
#' @section addm_run_...() functions:
#' These are wrapper functions to run a (a)ddm simulations for a set of provided parameters.
#'
#' @section addm_fit_...() functions:
#' These functions allow you to do maximum likelihood fits of the model, provided with a parameter space. Currently only grid search is possible,
#' however new fitting methods will be developed in the near future.
#'
#' @section addm_plot_...() functions:
#' This set of functions will enable you to plot various psychometrics (currently two plots) and diagnostics of the modelfits.
#'
#' @section addm_support_...() functions:
#' This set of functions is used internally. You normally don't call any of those directly, however I make them available to aid understanding of the source code.
#'
#' @section aevacc_...() functions:
#' These functions are the core implementations of the simulation algorithms (coded in c++). They are called internally, and you normally would not need to call them directly.
#' They are however callable by name directly in R. As the addm_support_...() functions, I make them available to aid understanding of the source code.
#'
#' @docType package
#' @name addmtoolbox
#' @import data.table dplyr Rcpp RcppGSL RcppZiggurat parallel doMC foreach iterators ggplot2 pander knitr
#' @useDynLib addmtoolbox
#' @importFrom Rcpp sourceCpp
NULL
