% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/generics.R, R/pgVirtual.R
\docType{methods}
\name{defaults}
\alias{defaults}
\alias{defaults,pgVirtual-method}
\alias{defaults<-}
\alias{defaults<-,pgVirtual-method}
\title{Access default values for a pgVirtual subclass object}
\usage{
defaults(object)

defaults(object) <- value

\S4method{defaults}{pgVirtual}(object)

\S4method{defaults}{pgVirtual}(object) <- value
}
\arguments{
\item{object}{A pgVirtual subclass}

\item{value}{The new values to set}
}
\value{
A named list of default values
}
\description{
This method lets the user view and set the default values used for the 
different algorithms in FindMyFriends. Many of the parameters are reoccuring
and it can become laborious to type them in at each step. These 
functionalities makes it easy to set defaults on a per-pangenome basis.
}
\details{
Currently the following methods support reading defaults from a pgVirtual
object. Note that only directly named arguments are supported - arguments
passed on through the \code{...}-mechanism are not supported unless they are
passed to a function that support it.

\itemize{
  \item \code{\link{graphGrouping}}
  \item \code{\link{gpcGrouping}}
  \item \code{\link{variableRegions}}
  \item \code{\link{plotGroup}}
  \item \code{\link{kmerLink}}
  \item \code{\link{plotSimilarity}}
  \item \code{\link{plotTree}}
  \item \code{\link{kmerSimilarity}}
}
}
\section{Methods (by class)}{
\itemize{
\item \code{pgVirtual}: Default values for pgVirtual subclass objects

\item \code{pgVirtual}: Set defaults for pgVirtual subclass objects
}}
\examples{
# Get all object defaults
testPG <- .loadPgExample()
defaults(testPG)

# Set a new default
defaults(testPG)$minFlank <- 2

}

