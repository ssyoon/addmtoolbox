# addmtoolbox
Collection of Tools for fitting attentional drift diffusion models (standard drift diffusion models included)


# Installing the package

The following guide is specifically for Mac OS systems. Windows systems have not yet been tested. On Linux/Ubuntu system, directly follow up with step ***UNKNOWN*** as gsl is often/always included in the distribution. 

## Dependencies
The ***addmtoolbox*** package depends notably on the ***RcppZiggurat*** package which in turn depends on the ***RcppGSL*** package. For the ***RcppGSL*** package to work, we need to install the [GNU GSL scientific library](http://www.gnu.org/software/gsl/). 

## Installing GSL Library
Below is a step by step guide to installing the [GNU GSL scientific library](http://www.gnu.org/software/gsl/).

1. First [download](http://mirrors.ibiblio.org/gnu/ftp/gnu/gsl/) the current version and unpack it if not done automatically. (choose the file which has the highest version number: ***gsl-1.16.tar.gz*** at the time of writing)
2. Go to the terminal and navigate to the directory to which you downloaded the ***gsl library***. (useful terminal commands: cd, ls)
3. Type ```./configure``` wait until the the execution finished and then type ```make``` to install the library. (you can find these instructions in the ***INSTALL*** file inside of the downloaded ***gsl*** folder). The build process takes a while now.

By now we can proceed by opening [***RStudio***](http://www.rstudio.com/).

## Installing addmtoolbox from github

To install the ***addmtoolbox*** package from github, first the ***devtools*** package must be loaded in R.
This can be easily done by typing ```install.packages("devtools")``` in the ***R Console*** to install the package and the typing ```library(devtools)``` to load it.



