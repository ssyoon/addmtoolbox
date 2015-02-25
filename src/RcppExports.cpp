// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// aevacc2_by_condition
IntegerVector aevacc2_by_condition(float sd, float theta, float drift, int non_decision_time, int timestep, int nr_reps, int maxdur, NumericVector update, IntegerVector fixpos, IntegerVector fixdur, IntegerVector fixdursamples, Function fixation_model);
RcppExport SEXP addmtoolbox_aevacc2_by_condition(SEXP sdSEXP, SEXP thetaSEXP, SEXP driftSEXP, SEXP non_decision_timeSEXP, SEXP timestepSEXP, SEXP nr_repsSEXP, SEXP maxdurSEXP, SEXP updateSEXP, SEXP fixposSEXP, SEXP fixdurSEXP, SEXP fixdursamplesSEXP, SEXP fixation_modelSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< float >::type sd(sdSEXP );
        Rcpp::traits::input_parameter< float >::type theta(thetaSEXP );
        Rcpp::traits::input_parameter< float >::type drift(driftSEXP );
        Rcpp::traits::input_parameter< int >::type non_decision_time(non_decision_timeSEXP );
        Rcpp::traits::input_parameter< int >::type timestep(timestepSEXP );
        Rcpp::traits::input_parameter< int >::type nr_reps(nr_repsSEXP );
        Rcpp::traits::input_parameter< int >::type maxdur(maxdurSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type update(updateSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixpos(fixposSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdur(fixdurSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdursamples(fixdursamplesSEXP );
        Rcpp::traits::input_parameter< Function >::type fixation_model(fixation_modelSEXP );
        IntegerVector __result = aevacc2_by_condition(sd, theta, drift, non_decision_time, timestep, nr_reps, maxdur, update, fixpos, fixdur, fixdursamples, fixation_model);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// aevacc2_by_trial
int aevacc2_by_trial(int nr_reps, int maxdur, int mindur, int real_decision, float sd, float theta, float drift, int non_decision_time, int timestep, NumericVector update, IntegerVector fixpos, IntegerVector fixdur);
RcppExport SEXP addmtoolbox_aevacc2_by_trial(SEXP nr_repsSEXP, SEXP maxdurSEXP, SEXP mindurSEXP, SEXP real_decisionSEXP, SEXP sdSEXP, SEXP thetaSEXP, SEXP driftSEXP, SEXP non_decision_timeSEXP, SEXP timestepSEXP, SEXP updateSEXP, SEXP fixposSEXP, SEXP fixdurSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type nr_reps(nr_repsSEXP );
        Rcpp::traits::input_parameter< int >::type maxdur(maxdurSEXP );
        Rcpp::traits::input_parameter< int >::type mindur(mindurSEXP );
        Rcpp::traits::input_parameter< int >::type real_decision(real_decisionSEXP );
        Rcpp::traits::input_parameter< float >::type sd(sdSEXP );
        Rcpp::traits::input_parameter< float >::type theta(thetaSEXP );
        Rcpp::traits::input_parameter< float >::type drift(driftSEXP );
        Rcpp::traits::input_parameter< int >::type non_decision_time(non_decision_timeSEXP );
        Rcpp::traits::input_parameter< int >::type timestep(timestepSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type update(updateSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixpos(fixposSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdur(fixdurSEXP );
        int __result = aevacc2_by_trial(nr_reps, maxdur, mindur, real_decision, sd, theta, drift, non_decision_time, timestep, update, fixpos, fixdur);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// aevacc_by_condition
IntegerVector aevacc_by_condition(float sd, float theta, float drift, int non_decision_time, int timestep, int nr_reps, int maxdur, NumericVector update, IntegerVector fixpos, IntegerVector fixdur, IntegerVector fixdursamples, Function fixation_model);
RcppExport SEXP addmtoolbox_aevacc_by_condition(SEXP sdSEXP, SEXP thetaSEXP, SEXP driftSEXP, SEXP non_decision_timeSEXP, SEXP timestepSEXP, SEXP nr_repsSEXP, SEXP maxdurSEXP, SEXP updateSEXP, SEXP fixposSEXP, SEXP fixdurSEXP, SEXP fixdursamplesSEXP, SEXP fixation_modelSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< float >::type sd(sdSEXP );
        Rcpp::traits::input_parameter< float >::type theta(thetaSEXP );
        Rcpp::traits::input_parameter< float >::type drift(driftSEXP );
        Rcpp::traits::input_parameter< int >::type non_decision_time(non_decision_timeSEXP );
        Rcpp::traits::input_parameter< int >::type timestep(timestepSEXP );
        Rcpp::traits::input_parameter< int >::type nr_reps(nr_repsSEXP );
        Rcpp::traits::input_parameter< int >::type maxdur(maxdurSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type update(updateSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixpos(fixposSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdur(fixdurSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdursamples(fixdursamplesSEXP );
        Rcpp::traits::input_parameter< Function >::type fixation_model(fixation_modelSEXP );
        IntegerVector __result = aevacc_by_condition(sd, theta, drift, non_decision_time, timestep, nr_reps, maxdur, update, fixpos, fixdur, fixdursamples, fixation_model);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// aevacc_by_condition_memnoise
IntegerVector aevacc_by_condition_memnoise(float sd, float theta, float drift, int non_decision_time, int timestep, int nr_reps, int maxdur, NumericVector update, IntegerVector fixpos, IntegerVector fixdur, IntegerVector fixdursamples, Function fixation_model);
RcppExport SEXP addmtoolbox_aevacc_by_condition_memnoise(SEXP sdSEXP, SEXP thetaSEXP, SEXP driftSEXP, SEXP non_decision_timeSEXP, SEXP timestepSEXP, SEXP nr_repsSEXP, SEXP maxdurSEXP, SEXP updateSEXP, SEXP fixposSEXP, SEXP fixdurSEXP, SEXP fixdursamplesSEXP, SEXP fixation_modelSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< float >::type sd(sdSEXP );
        Rcpp::traits::input_parameter< float >::type theta(thetaSEXP );
        Rcpp::traits::input_parameter< float >::type drift(driftSEXP );
        Rcpp::traits::input_parameter< int >::type non_decision_time(non_decision_timeSEXP );
        Rcpp::traits::input_parameter< int >::type timestep(timestepSEXP );
        Rcpp::traits::input_parameter< int >::type nr_reps(nr_repsSEXP );
        Rcpp::traits::input_parameter< int >::type maxdur(maxdurSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type update(updateSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixpos(fixposSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdur(fixdurSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdursamples(fixdursamplesSEXP );
        Rcpp::traits::input_parameter< Function >::type fixation_model(fixation_modelSEXP );
        IntegerVector __result = aevacc_by_condition_memnoise(sd, theta, drift, non_decision_time, timestep, nr_reps, maxdur, update, fixpos, fixdur, fixdursamples, fixation_model);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// aevacc_by_trial
int aevacc_by_trial(int nr_reps, int maxdur, int mindur, int cur_decision, float sd, float theta, float drift, int non_decision_time, int timestep, NumericVector update, IntegerVector fixpos, IntegerVector fixdur);
RcppExport SEXP addmtoolbox_aevacc_by_trial(SEXP nr_repsSEXP, SEXP maxdurSEXP, SEXP mindurSEXP, SEXP cur_decisionSEXP, SEXP sdSEXP, SEXP thetaSEXP, SEXP driftSEXP, SEXP non_decision_timeSEXP, SEXP timestepSEXP, SEXP updateSEXP, SEXP fixposSEXP, SEXP fixdurSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type nr_reps(nr_repsSEXP );
        Rcpp::traits::input_parameter< int >::type maxdur(maxdurSEXP );
        Rcpp::traits::input_parameter< int >::type mindur(mindurSEXP );
        Rcpp::traits::input_parameter< int >::type cur_decision(cur_decisionSEXP );
        Rcpp::traits::input_parameter< float >::type sd(sdSEXP );
        Rcpp::traits::input_parameter< float >::type theta(thetaSEXP );
        Rcpp::traits::input_parameter< float >::type drift(driftSEXP );
        Rcpp::traits::input_parameter< int >::type non_decision_time(non_decision_timeSEXP );
        Rcpp::traits::input_parameter< int >::type timestep(timestepSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type update(updateSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixpos(fixposSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdur(fixdurSEXP );
        int __result = aevacc_by_trial(nr_reps, maxdur, mindur, cur_decision, sd, theta, drift, non_decision_time, timestep, update, fixpos, fixdur);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// aevacc_by_trial_memnoise
int aevacc_by_trial_memnoise(int nr_reps, int maxdur, int mindur, int cur_decision, float sd, float theta, float drift, int non_decision_time, int timestep, NumericVector update, IntegerVector fixpos, IntegerVector fixdur);
RcppExport SEXP addmtoolbox_aevacc_by_trial_memnoise(SEXP nr_repsSEXP, SEXP maxdurSEXP, SEXP mindurSEXP, SEXP cur_decisionSEXP, SEXP sdSEXP, SEXP thetaSEXP, SEXP driftSEXP, SEXP non_decision_timeSEXP, SEXP timestepSEXP, SEXP updateSEXP, SEXP fixposSEXP, SEXP fixdurSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< int >::type nr_reps(nr_repsSEXP );
        Rcpp::traits::input_parameter< int >::type maxdur(maxdurSEXP );
        Rcpp::traits::input_parameter< int >::type mindur(mindurSEXP );
        Rcpp::traits::input_parameter< int >::type cur_decision(cur_decisionSEXP );
        Rcpp::traits::input_parameter< float >::type sd(sdSEXP );
        Rcpp::traits::input_parameter< float >::type theta(thetaSEXP );
        Rcpp::traits::input_parameter< float >::type drift(driftSEXP );
        Rcpp::traits::input_parameter< int >::type non_decision_time(non_decision_timeSEXP );
        Rcpp::traits::input_parameter< int >::type timestep(timestepSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type update(updateSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixpos(fixposSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdur(fixdurSEXP );
        int __result = aevacc_by_trial_memnoise(nr_reps, maxdur, mindur, cur_decision, sd, theta, drift, non_decision_time, timestep, update, fixpos, fixdur);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// aevacc_full_output_memnoise
NumericVector aevacc_full_output_memnoise(float sd, float theta, float drift, int non_decision_time, int timestep, int nr_reps, int maxdur, NumericVector update, IntegerVector fixpos, IntegerVector fixdur, IntegerVector fixdursamples, Function fixation_model);
RcppExport SEXP addmtoolbox_aevacc_full_output_memnoise(SEXP sdSEXP, SEXP thetaSEXP, SEXP driftSEXP, SEXP non_decision_timeSEXP, SEXP timestepSEXP, SEXP nr_repsSEXP, SEXP maxdurSEXP, SEXP updateSEXP, SEXP fixposSEXP, SEXP fixdurSEXP, SEXP fixdursamplesSEXP, SEXP fixation_modelSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< float >::type sd(sdSEXP );
        Rcpp::traits::input_parameter< float >::type theta(thetaSEXP );
        Rcpp::traits::input_parameter< float >::type drift(driftSEXP );
        Rcpp::traits::input_parameter< int >::type non_decision_time(non_decision_timeSEXP );
        Rcpp::traits::input_parameter< int >::type timestep(timestepSEXP );
        Rcpp::traits::input_parameter< int >::type nr_reps(nr_repsSEXP );
        Rcpp::traits::input_parameter< int >::type maxdur(maxdurSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type update(updateSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixpos(fixposSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdur(fixdurSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type fixdursamples(fixdursamplesSEXP );
        Rcpp::traits::input_parameter< Function >::type fixation_model(fixation_modelSEXP );
        NumericVector __result = aevacc_full_output_memnoise(sd, theta, drift, non_decision_time, timestep, nr_reps, maxdur, update, fixpos, fixdur, fixdursamples, fixation_model);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
