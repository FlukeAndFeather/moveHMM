// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// nLogLike_rcpp
double nLogLike_rcpp(NumericVector trVec, arma::rowvec delta, arma::mat allProbs);
RcppExport SEXP moveHMM_nLogLike_rcpp(SEXP trVecSEXP, SEXP deltaSEXP, SEXP allProbsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type trVec(trVecSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type allProbs(allProbsSEXP);
    __result = Rcpp::wrap(nLogLike_rcpp(trVec, delta, allProbs));
    return __result;
END_RCPP
}
