addmtoolbox: tutorial
========================================================
author: Alexander Fengler
date: 03.03.2015
font-family: 'Helvetica'




aDDM: quick intro // equations
========================================================
The Equations...

 <br>

Fixation left:
<br> <br>
$$
\begin{aligned}
  V_t = V_{t-1} + d*(r_{left} - \theta*r_{right}) + e_{t}
\end{aligned}
$$

Fixation right:
<br> <br>
$$
\begin{aligned}
  V_t = V_{t-1} + d*(\theta*r_{left} - r_{right}) + e_t
\end{aligned}
$$

<br>
Decision taken as soon as $V_t > 1$ or $V_t < -1$....


aDDM: quick intro // code
========================================================
left: 30%

Variables:
<small style="font-size:.6em">

```r
# Item Valuations
v1 = 2
v2 = 4

# Model
rdv = 0
theta = 0.1
d = 0.002
sd = 0.02
```
</small>

***
Model:
<small style="font-size:.6em">

```r
# Some Initializations
rdv.vector = seq(1:1000)
time = 1

# Now propagate model
for (fix.pos in rep(c(1,2,1,2),each=250)){

  if (fix.pos == 1){
    rdv = rdv + d*(v1 - theta*v2) + rnorm(1,0,sd)
  }

  if (fix.pos == 2){
    rdv = rdv + d*(theta*v1 - v2) + rnorm(1,0,sd)
  }

  rdv.vector[time] = rdv
  if (rdv > 1 | rdv < -1){
    break
  }
  time = time + 1
}
```
</small>



aDDM: quick intro // visualization
========================================================

![plot of chunk unnamed-chunk-4](tutorial_intro-figure/unnamed-chunk-4-1.png) 

aDDM quick intro // likelihood calculation
========================================================

We simulate the model (many times) with a given set of parameters...

Then produce table like this,

| Trial id | Choice   |  RT Bin  |   Likelihood of event (given our model / parameters)|
| ---------|------ |------|----------|
|1|     1  |   1800   |     0.03     |
|2|    1  |  2200   |   0.05      |
|3|      2  |  2000     |     0.04      |
|.| . | . | . |
|.| . | . | . |
|n| 1 | 3000 | 0.02 |

Then we take the sum of the log of the likelihood values.

aDDM quick intro // fit by condition
========================================================
<br>
*Standard way of fitting the addm,*

<br>

 - define unique trial conditions

 - build fixation model

 - simulate model by unique trial condition with own fixation model


**Implemented** in addmtoolbox. You can supply your own arbitrary fixation model
and the package will use it.


aDDM quick intro // fit by trial
========================================================
<br>
*Alternative way of fitting the addm,*

<br>

  - simulate model by trial

  - use empirical fixations and rt to inform simulations

  - no need for separate fixation model for model fits


**Implemented** in addmtoolbox. *Note*, that you will still need a fixation model when simulating a fake data set, once you have the optimal parameter!

addmtoolbox: functions
========================================================
<br>
*What does it do for you?*

<br>

Data Preprocessing

Model Simulation

Model Fitting

Plotting Results


***
<br>
*Functions*

<br>

**addm_dataprep()**

**addm_run...()**

**addm_fit...()**

**addm_plot...()**

addmtoolbox: documentation
========================================================
General Package info:

```r
?addmtoolbox
```

Detailed function documentation:


```r
?addm_dataprep
```

Tutorials:


```r
# List Vignettes
vignette(package = 'addmtoolbox')
# Access Vignette
vignette('addmtoolbox_modelfit_walkthrough')
```

addmtoolbox: data
========================================================
<br>
The addmtoolbox come with a full **set of example data**.

This should help to,

<br> <br>
1. Understand the data **format expected** by addmtoolbox
<br> <br>
2. Understand the data **formats returned** by addmtoolbox

<br>

The corresponding data frames are **automatically loaded** with the package.


addmtoolbox: data
========================================================

*Data Type*

<br>

Choice/RT Data

Eyetracking Data

Example Loglikelihood output

Detailed aDDM Output

***

*Data Frame*

<br>

**addm_data_choice**

**addm_data_eye**

**addm_data_loglik_trial/condition**

**add,_data_full_output**

addmtoolbox
========================================================
<br> <br> <br> <br>

Questions?