% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/generics.R, R/investigating.R
\docType{methods}
\name{groupStat}
\alias{groupStat}
\alias{groupStat,pgVirtual-method}
\title{Calculate statistics about each gene group}
\usage{
groupStat(object, ...)

\S4method{groupStat}{pgVirtual}(object, vicinity = 1)
}
\arguments{
\item{object}{A pgVirtual subclass}

\item{...}{parameters passed on.}

\item{vicinity}{An integer given the number of flanking gene groups to 
traverse}
}
\value{
A list with an element for each gene group, each with the following 
elements.
\describe{
 \item{maxOrg}{The highest number of distinct genes from the same organism 
 present in the group. A number above 1 indicate the presence of paralogues.}
 \item{minLength}{The length of the shortest sequence in the group.}
 \item{maxLength}{The length of the longest sequence in the group.}
 \item{sdLength}{The standard deviation of lengths in the group.}
 \item{genes}{The index for the genes present in the group.}
 \item{backward}{A character vector with gene groups separated by ';' that 
 lies downstream of the gene group. The number of gene groups for each gene
 is controlled by the flankSize argument. If the contig stops before the 
 required number of flanking genes have been reached, NA will be added. 
 Downstream is defined in relation to the strand of the contig/chromosome, 
 and not the translational direction of the gene in question.}
 \item{forward}{As above in the other direction.}
}
}
\description{
This method calculates a range of statistics and positional information
about each gene group. The information returned are. Maximum number of genes
from the same organism (paralogues), shortest sequence length, longest 
sequence length, standard deviation of sequence lengths, index of genes in 
group, downstream and upstream gene groups.
}
\section{Methods (by class)}{
\itemize{
\item \code{pgVirtual}: Group statistics for all pgVirtual subclasses
}}
\examples{
testPG <- .loadPgExample(withGroups=TRUE)

grStats <- groupStat(testPG)

}

