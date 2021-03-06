% Generated by roxygen2 (4.1.0): do not edit by hand
% Please edit documentation in R/addm2_plot_modelvis.R
\name{addm2_plot_modelvis}
\alias{addm2_plot_modelvis}
\title{Visualize a single drift diffusion model run with two items}
\usage{
addm2_plot_modelvis(d = 0.002, theta = 0.1, sd = 0.02, v1 = 2, v2 = 4)
}
\arguments{
\item{theta}{numeric variable indicating the attential bias to be use for the model run ([0,1])}

\item{sd}{numeric variable indicating the standard deviation of the noise term used in the model run}

\item{v1}{numeric variable indicating the value of the left item}

\item{v2}{numeric variable indicating the value of the right item}
}
\value{
ggplot object. Costumizable.
}
\description{
Visualize a single model run (two items)
\code{addm2_plot_modelvis()}
}
\author{
Alexander Fengler, \email{alexanderfengler@gmx.de}
}

