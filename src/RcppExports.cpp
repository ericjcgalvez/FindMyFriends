// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cdhitestC
IntegerVector cdhitestC(List opts, CharacterVector name, bool showProgress);
RcppExport SEXP FindMyFriends_cdhitestC(SEXP optsSEXP, SEXP nameSEXP, SEXP showProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type opts(optsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type showProgress(showProgressSEXP);
    __result = Rcpp::wrap(cdhitestC(opts, name, showProgress));
    return __result;
END_RCPP
}
// cdhitC
IntegerVector cdhitC(List opts, CharacterVector name, bool showProgress);
RcppExport SEXP FindMyFriends_cdhitC(SEXP optsSEXP, SEXP nameSEXP, SEXP showProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type opts(optsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type showProgress(showProgressSEXP);
    __result = Rcpp::wrap(cdhitC(opts, name, showProgress));
    return __result;
END_RCPP
}
// nSeqs
NumericVector nSeqs(CharacterVector files);
RcppExport SEXP FindMyFriends_nSeqs(SEXP filesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type files(filesSEXP);
    __result = Rcpp::wrap(nSeqs(files));
    return __result;
END_RCPP
}
// getClustersFromR
IntegerVector getClustersFromR(IntegerVector I, IntegerVector P, NumericVector X);
RcppExport SEXP FindMyFriends_getClustersFromR(SEXP ISEXP, SEXP PSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type I(ISEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type P(PSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    __result = Rcpp::wrap(getClustersFromR(I, P, X));
    return __result;
END_RCPP
}
// createPanMatrix
List createPanMatrix(IntegerVector org, IntegerVector group);
RcppExport SEXP FindMyFriends_createPanMatrix(SEXP orgSEXP, SEXP groupSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type org(orgSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type group(groupSEXP);
    __result = Rcpp::wrap(createPanMatrix(org, group));
    return __result;
END_RCPP
}
// calcGroupInfo
DataFrame calcGroupInfo(List groupOrgs, int nOrgs, double threshold);
RcppExport SEXP FindMyFriends_calcGroupInfo(SEXP groupOrgsSEXP, SEXP nOrgsSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type groupOrgs(groupOrgsSEXP);
    Rcpp::traits::input_parameter< int >::type nOrgs(nOrgsSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    __result = Rcpp::wrap(calcGroupInfo(groupOrgs, nOrgs, threshold));
    return __result;
END_RCPP
}
// findIn
IntegerVector findIn(IntegerVector keys, IntegerVector lookup);
RcppExport SEXP FindMyFriends_findIn(SEXP keysSEXP, SEXP lookupSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type lookup(lookupSEXP);
    __result = Rcpp::wrap(findIn(keys, lookup));
    return __result;
END_RCPP
}
// lkMatrix
List lkMatrix(IntegerVector pX, IntegerVector jX, NumericVector xX, IntegerVector selX, double lowerLimit, double upperLimit);
RcppExport SEXP FindMyFriends_lkMatrix(SEXP pXSEXP, SEXP jXSEXP, SEXP xXSEXP, SEXP selXSEXP, SEXP lowerLimitSEXP, SEXP upperLimitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type pX(pXSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type jX(jXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xX(xXSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type selX(selXSEXP);
    Rcpp::traits::input_parameter< double >::type lowerLimit(lowerLimitSEXP);
    Rcpp::traits::input_parameter< double >::type upperLimit(upperLimitSEXP);
    __result = Rcpp::wrap(lkMatrix(pX, jX, xX, selX, lowerLimit, upperLimit));
    return __result;
END_RCPP
}
// lkMembers
IntegerVector lkMembers(IntegerVector pX, IntegerVector jX, NumericVector xX, IntegerVector selX, double lowerLimit, double upperLimit);
RcppExport SEXP FindMyFriends_lkMembers(SEXP pXSEXP, SEXP jXSEXP, SEXP xXSEXP, SEXP selXSEXP, SEXP lowerLimitSEXP, SEXP upperLimitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type pX(pXSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type jX(jXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xX(xXSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type selX(selXSEXP);
    Rcpp::traits::input_parameter< double >::type lowerLimit(lowerLimitSEXP);
    Rcpp::traits::input_parameter< double >::type upperLimit(upperLimitSEXP);
    __result = Rcpp::wrap(lkMembers(pX, jX, xX, selX, lowerLimit, upperLimit));
    return __result;
END_RCPP
}
// neighborhoodSim
List neighborhoodSim(IntegerVector members, IntegerVector groups, IntegerVector organism, int size, IntegerVector down, IntegerVector up, LogicalVector reverse, IntegerVector width, double threshold, bool forceParalogues);
RcppExport SEXP FindMyFriends_neighborhoodSim(SEXP membersSEXP, SEXP groupsSEXP, SEXP organismSEXP, SEXP sizeSEXP, SEXP downSEXP, SEXP upSEXP, SEXP reverseSEXP, SEXP widthSEXP, SEXP thresholdSEXP, SEXP forceParaloguesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type members(membersSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type organism(organismSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type down(downSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type up(upSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type reverse(reverseSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type forceParalogues(forceParaloguesSEXP);
    __result = Rcpp::wrap(neighborhoodSim(members, groups, organism, size, down, up, reverse, width, threshold, forceParalogues));
    return __result;
END_RCPP
}
// mergeSims
DataFrame mergeSims(IntegerVector nI, IntegerVector nP, IntegerVector nX, IntegerVector sI, IntegerVector sP, NumericVector sX, IntegerVector guideGroup);
RcppExport SEXP FindMyFriends_mergeSims(SEXP nISEXP, SEXP nPSEXP, SEXP nXSEXP, SEXP sISEXP, SEXP sPSEXP, SEXP sXSEXP, SEXP guideGroupSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type nI(nISEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nP(nPSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nX(nXSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sI(sISEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sP(sPSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sX(sXSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type guideGroup(guideGroupSEXP);
    __result = Rcpp::wrap(mergeSims(nI, nP, nX, sI, sP, sX, guideGroup));
    return __result;
END_RCPP
}
// widthSim
IntegerVector widthSim(List groups, IntegerVector width, double threshold, CharacterVector progName, bool showProgress);
RcppExport SEXP FindMyFriends_widthSim(SEXP groupsSEXP, SEXP widthSEXP, SEXP thresholdSEXP, SEXP progNameSEXP, SEXP showProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type progName(progNameSEXP);
    Rcpp::traits::input_parameter< bool >::type showProgress(showProgressSEXP);
    __result = Rcpp::wrap(widthSim(groups, width, threshold, progName, showProgress));
    return __result;
END_RCPP
}
// getCliques
IntegerVector getCliques(RObject graph);
RcppExport SEXP FindMyFriends_getCliques(SEXP graphSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< RObject >::type graph(graphSEXP);
    __result = Rcpp::wrap(getCliques(graph));
    return __result;
END_RCPP
}
// getPotentials
IntegerVector getPotentials(IntegerVector down, IntegerVector up, LogicalVector pending, LogicalVector reverse, List groupSplit, IntegerVector groups);
RcppExport SEXP FindMyFriends_getPotentials(SEXP downSEXP, SEXP upSEXP, SEXP pendingSEXP, SEXP reverseSEXP, SEXP groupSplitSEXP, SEXP groupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type down(downSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type up(upSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type pending(pendingSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type reverse(reverseSEXP);
    Rcpp::traits::input_parameter< List >::type groupSplit(groupSplitSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type groups(groupsSEXP);
    __result = Rcpp::wrap(getPotentials(down, up, pending, reverse, groupSplit, groups));
    return __result;
END_RCPP
}
// groupHasParalogues
LogicalVector groupHasParalogues(List groupMembers, IntegerVector org);
RcppExport SEXP FindMyFriends_groupHasParalogues(SEXP groupMembersSEXP, SEXP orgSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type groupMembers(groupMembersSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type org(orgSEXP);
    __result = Rcpp::wrap(groupHasParalogues(groupMembers, org));
    return __result;
END_RCPP
}
// groupNeighbors
DataFrame groupNeighbors(IntegerVector down, IntegerVector up, IntegerVector groups, IntegerVector order);
RcppExport SEXP FindMyFriends_groupNeighbors(SEXP downSEXP, SEXP upSEXP, SEXP groupsSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type down(downSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type up(upSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type order(orderSEXP);
    __result = Rcpp::wrap(groupNeighbors(down, up, groups, order));
    return __result;
END_RCPP
}
// mergeGroupsByNeighbors
DataFrame mergeGroupsByNeighbors(List GOI, DataFrame lookup);
RcppExport SEXP FindMyFriends_mergeGroupsByNeighbors(SEXP GOISEXP, SEXP lookupSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type GOI(GOISEXP);
    Rcpp::traits::input_parameter< DataFrame >::type lookup(lookupSEXP);
    __result = Rcpp::wrap(mergeGroupsByNeighbors(GOI, lookup));
    return __result;
END_RCPP
}
// panSim
NumericMatrix panSim(IntegerVector P, IntegerVector I, CharacterVector names);
RcppExport SEXP FindMyFriends_panSim(SEXP PSEXP, SEXP ISEXP, SEXP namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type P(PSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type I(ISEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    __result = Rcpp::wrap(panSim(P, I, names));
    return __result;
END_RCPP
}
