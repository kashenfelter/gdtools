% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/fontconfig.R
\name{set_dummy_conf}
\alias{set_dummy_conf}
\alias{unset_dummy_conf}
\title{Set and unset a minimalistic Fontconfig configuration}
\usage{
set_dummy_conf()

unset_dummy_conf()
}
\description{
\code{set_dummy_conf()} sets the \code{FONTCONFIG_FILE} environment
variable with a minimalistic configuration file. This configuration
uses a folder with only one font (Bitstream Vera Sans) to which
every font patterns are matched. This is mostly useful to reduce
cache-building time on testing platforms running Windows (e.g. on
Appveyor or on CRAN's win-builder service).
}
\examples{
if( require("fontquiver") ){
on_appveyor <- function() {
  identical(Sys.getenv("APPVEYOR"), "True")
}

# Use minimal fonts.conf to speed up fc-cache
if (on_appveyor()) {
  set_dummy_conf()
}

unset_dummy_conf()
}
}
