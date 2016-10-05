// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/gdtools.h"
#include "../inst/include/gdtools_types.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// str_extents
NumericMatrix str_extents(CharacterVector x, std::string fontname, double fontsize, int bold, int italic, std::string fontfile);
RcppExport SEXP gdtools_str_extents(SEXP xSEXP, SEXP fontnameSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP, SEXP fontfileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname(fontnameSEXP);
    Rcpp::traits::input_parameter< double >::type fontsize(fontsizeSEXP);
    Rcpp::traits::input_parameter< int >::type bold(boldSEXP);
    Rcpp::traits::input_parameter< int >::type italic(italicSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontfile(fontfileSEXP);
    rcpp_result_gen = Rcpp::wrap(str_extents(x, fontname, fontsize, bold, italic, fontfile));
    return rcpp_result_gen;
END_RCPP
}
// str_metrics
NumericVector str_metrics(CharacterVector x, std::string fontname, double fontsize, int bold, int italic, std::string fontfile);
RcppExport SEXP gdtools_str_metrics(SEXP xSEXP, SEXP fontnameSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP, SEXP fontfileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname(fontnameSEXP);
    Rcpp::traits::input_parameter< double >::type fontsize(fontsizeSEXP);
    Rcpp::traits::input_parameter< int >::type bold(boldSEXP);
    Rcpp::traits::input_parameter< int >::type italic(italicSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontfile(fontfileSEXP);
    rcpp_result_gen = Rcpp::wrap(str_metrics(x, fontname, fontsize, bold, italic, fontfile));
    return rcpp_result_gen;
END_RCPP
}
// str_metrics_from_file
DataFrame str_metrics_from_file(CharacterVector x, CharacterVector fontfiles, double fontsize, int bold, int italic, std::string fallback);
RcppExport SEXP gdtools_str_metrics_from_file(SEXP xSEXP, SEXP fontfilesSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP, SEXP fallbackSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type fontfiles(fontfilesSEXP);
    Rcpp::traits::input_parameter< double >::type fontsize(fontsizeSEXP);
    Rcpp::traits::input_parameter< int >::type bold(boldSEXP);
    Rcpp::traits::input_parameter< int >::type italic(italicSEXP);
    Rcpp::traits::input_parameter< std::string >::type fallback(fallbackSEXP);
    rcpp_result_gen = Rcpp::wrap(str_metrics_from_file(x, fontfiles, fontsize, bold, italic, fallback));
    return rcpp_result_gen;
END_RCPP
}
// context_create
XPtrCairoContext context_create();
static SEXP gdtools_context_create_try() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(context_create());
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_context_create() {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_context_create_try());
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// context_set_font
bool context_set_font(XPtrCairoContext cc, std::string fontname, double fontsize, bool bold, bool italic, std::string fontfile);
static SEXP gdtools_context_set_font_try(SEXP ccSEXP, SEXP fontnameSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP, SEXP fontfileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtrCairoContext >::type cc(ccSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname(fontnameSEXP);
    Rcpp::traits::input_parameter< double >::type fontsize(fontsizeSEXP);
    Rcpp::traits::input_parameter< bool >::type bold(boldSEXP);
    Rcpp::traits::input_parameter< bool >::type italic(italicSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontfile(fontfileSEXP);
    rcpp_result_gen = Rcpp::wrap(context_set_font(cc, fontname, fontsize, bold, italic, fontfile));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_context_set_font(SEXP ccSEXP, SEXP fontnameSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP, SEXP fontfileSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_context_set_font_try(ccSEXP, fontnameSEXP, fontsizeSEXP, boldSEXP, italicSEXP, fontfileSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// context_extents
FontMetric context_extents(XPtrCairoContext cc, std::string x);
static SEXP gdtools_context_extents_try(SEXP ccSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtrCairoContext >::type cc(ccSEXP);
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(context_extents(cc, x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_context_extents(SEXP ccSEXP, SEXP xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_context_extents_try(ccSEXP, xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// fontfile_context_create
XPtrFontFileContext fontfile_context_create(CharacterVector fontfiles);
static SEXP gdtools_fontfile_context_create_try(SEXP fontfilesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type fontfiles(fontfilesSEXP);
    rcpp_result_gen = Rcpp::wrap(fontfile_context_create(fontfiles));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_fontfile_context_create(SEXP fontfilesSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_fontfile_context_create_try(fontfilesSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// fontfile_context_set_font
bool fontfile_context_set_font(XPtrFontFileContext cc, double fontsize, bool bold, bool italic, std::string fallback);
static SEXP gdtools_fontfile_context_set_font_try(SEXP ccSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP, SEXP fallbackSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtrFontFileContext >::type cc(ccSEXP);
    Rcpp::traits::input_parameter< double >::type fontsize(fontsizeSEXP);
    Rcpp::traits::input_parameter< bool >::type bold(boldSEXP);
    Rcpp::traits::input_parameter< bool >::type italic(italicSEXP);
    Rcpp::traits::input_parameter< std::string >::type fallback(fallbackSEXP);
    rcpp_result_gen = Rcpp::wrap(fontfile_context_set_font(cc, fontsize, bold, italic, fallback));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_fontfile_context_set_font(SEXP ccSEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP, SEXP fallbackSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_fontfile_context_set_font_try(ccSEXP, fontsizeSEXP, boldSEXP, italicSEXP, fallbackSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// fontfile_context_extents
FontMetric fontfile_context_extents(XPtrFontFileContext cc, std::string x);
static SEXP gdtools_fontfile_context_extents_try(SEXP ccSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtrFontFileContext >::type cc(ccSEXP);
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(fontfile_context_extents(cc, x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_fontfile_context_extents(SEXP ccSEXP, SEXP xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_fontfile_context_extents_try(ccSEXP, xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// font_context_create
XPtrFamiliesContext font_context_create(std::string fontname_, CharacterVector sans_files, CharacterVector serif_files, CharacterVector mono_files);
static SEXP gdtools_font_context_create_try(SEXP fontname_SEXP, SEXP sans_filesSEXP, SEXP serif_filesSEXP, SEXP mono_filesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type fontname_(fontname_SEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sans_files(sans_filesSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type serif_files(serif_filesSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type mono_files(mono_filesSEXP);
    rcpp_result_gen = Rcpp::wrap(font_context_create(fontname_, sans_files, serif_files, mono_files));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_font_context_create(SEXP fontname_SEXP, SEXP sans_filesSEXP, SEXP serif_filesSEXP, SEXP mono_filesSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_font_context_create_try(fontname_SEXP, sans_filesSEXP, serif_filesSEXP, mono_filesSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// font_context_set_font
bool font_context_set_font(XPtrFamiliesContext cc, std::string family, double fontsize, bool bold, bool italic);
static SEXP gdtools_font_context_set_font_try(SEXP ccSEXP, SEXP familySEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtrFamiliesContext >::type cc(ccSEXP);
    Rcpp::traits::input_parameter< std::string >::type family(familySEXP);
    Rcpp::traits::input_parameter< double >::type fontsize(fontsizeSEXP);
    Rcpp::traits::input_parameter< bool >::type bold(boldSEXP);
    Rcpp::traits::input_parameter< bool >::type italic(italicSEXP);
    rcpp_result_gen = Rcpp::wrap(font_context_set_font(cc, family, fontsize, bold, italic));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_font_context_set_font(SEXP ccSEXP, SEXP familySEXP, SEXP fontsizeSEXP, SEXP boldSEXP, SEXP italicSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_font_context_set_font_try(ccSEXP, familySEXP, fontsizeSEXP, boldSEXP, italicSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// font_context_extents
FontMetric font_context_extents(XPtrFamiliesContext cc, std::string x);
static SEXP gdtools_font_context_extents_try(SEXP ccSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtrFamiliesContext >::type cc(ccSEXP);
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(font_context_extents(cc, x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_font_context_extents(SEXP ccSEXP, SEXP xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_font_context_extents_try(ccSEXP, xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// font_context_fontname
std::string font_context_fontname(XPtrFamiliesContext cc);
static SEXP gdtools_font_context_fontname_try(SEXP ccSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< XPtrFamiliesContext >::type cc(ccSEXP);
    rcpp_result_gen = Rcpp::wrap(font_context_fontname(cc));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_font_context_fontname(SEXP ccSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_font_context_fontname_try(ccSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// raster_to_str
std::string raster_to_str(std::vector<unsigned int> raster, int w, int h, double width, double height, int interpolate);
static SEXP gdtools_raster_to_str_try(SEXP rasterSEXP, SEXP wSEXP, SEXP hSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP interpolateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<unsigned int> >::type raster(rasterSEXP);
    Rcpp::traits::input_parameter< int >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type interpolate(interpolateSEXP);
    rcpp_result_gen = Rcpp::wrap(raster_to_str(raster, w, h, width, height, interpolate));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_raster_to_str(SEXP rasterSEXP, SEXP wSEXP, SEXP hSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP interpolateSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_raster_to_str_try(rasterSEXP, wSEXP, hSEXP, widthSEXP, heightSEXP, interpolateSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// raster_to_file
int raster_to_file(std::vector<unsigned int> raster_, int w, int h, double width, double height, int interpolate, std::string filename);
static SEXP gdtools_raster_to_file_try(SEXP raster_SEXP, SEXP wSEXP, SEXP hSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP interpolateSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::vector<unsigned int> >::type raster_(raster_SEXP);
    Rcpp::traits::input_parameter< int >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type interpolate(interpolateSEXP);
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(raster_to_file(raster_, w, h, width, height, interpolate, filename));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_raster_to_file(SEXP raster_SEXP, SEXP wSEXP, SEXP hSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP interpolateSEXP, SEXP filenameSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_raster_to_file_try(raster_SEXP, wSEXP, hSEXP, widthSEXP, heightSEXP, interpolateSEXP, filenameSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// raster_png_
bool raster_png_(CharacterVector raster_, int w, int h, double width, double height, int interpolate, std::string filename);
static SEXP gdtools_raster_png__try(SEXP raster_SEXP, SEXP wSEXP, SEXP hSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP interpolateSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type raster_(raster_SEXP);
    Rcpp::traits::input_parameter< int >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type interpolate(interpolateSEXP);
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(raster_png_(raster_, w, h, width, height, interpolate, filename));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_raster_png_(SEXP raster_SEXP, SEXP wSEXP, SEXP hSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP interpolateSEXP, SEXP filenameSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_raster_png__try(raster_SEXP, wSEXP, hSEXP, widthSEXP, heightSEXP, interpolateSEXP, filenameSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// base64_raster_encode
std::string base64_raster_encode(CharacterVector raster_, int w, int h, double width, double height, int interpolate);
static SEXP gdtools_base64_raster_encode_try(SEXP raster_SEXP, SEXP wSEXP, SEXP hSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP interpolateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type raster_(raster_SEXP);
    Rcpp::traits::input_parameter< int >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type interpolate(interpolateSEXP);
    rcpp_result_gen = Rcpp::wrap(base64_raster_encode(raster_, w, h, width, height, interpolate));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_base64_raster_encode(SEXP raster_SEXP, SEXP wSEXP, SEXP hSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP interpolateSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_base64_raster_encode_try(raster_SEXP, wSEXP, hSEXP, widthSEXP, heightSEXP, interpolateSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// base64_file_encode
std::string base64_file_encode(std::string filename);
static SEXP gdtools_base64_file_encode_try(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(base64_file_encode(filename));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP gdtools_base64_file_encode(SEXP filenameSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(gdtools_base64_file_encode_try(filenameSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// sys_fonts
Rcpp::DataFrame sys_fonts();
RcppExport SEXP gdtools_sys_fonts() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(sys_fonts());
    return rcpp_result_gen;
END_RCPP
}
// best_family_match
String best_family_match(std::string font_family);
RcppExport SEXP gdtools_best_family_match(SEXP font_familySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type font_family(font_familySEXP);
    rcpp_result_gen = Rcpp::wrap(best_family_match(font_family));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int gdtools_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("XPtrCairoContext(*context_create)()");
        signatures.insert("bool(*context_set_font)(XPtrCairoContext,std::string,double,bool,bool,std::string)");
        signatures.insert("FontMetric(*context_extents)(XPtrCairoContext,std::string)");
        signatures.insert("XPtrFontFileContext(*fontfile_context_create)(CharacterVector)");
        signatures.insert("bool(*fontfile_context_set_font)(XPtrFontFileContext,double,bool,bool,std::string)");
        signatures.insert("FontMetric(*fontfile_context_extents)(XPtrFontFileContext,std::string)");
        signatures.insert("XPtrFamiliesContext(*font_context_create)(std::string,CharacterVector,CharacterVector,CharacterVector)");
        signatures.insert("bool(*font_context_set_font)(XPtrFamiliesContext,std::string,double,bool,bool)");
        signatures.insert("FontMetric(*font_context_extents)(XPtrFamiliesContext,std::string)");
        signatures.insert("std::string(*font_context_fontname)(XPtrFamiliesContext)");
        signatures.insert("std::string(*raster_to_str)(std::vector<unsigned int>,int,int,double,double,int)");
        signatures.insert("int(*raster_to_file)(std::vector<unsigned int>,int,int,double,double,int,std::string)");
        signatures.insert("bool(*raster_png_)(CharacterVector,int,int,double,double,int,std::string)");
        signatures.insert("std::string(*base64_raster_encode)(CharacterVector,int,int,double,double,int)");
        signatures.insert("std::string(*base64_file_encode)(std::string)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP gdtools_RcppExport_registerCCallable() { 
    R_RegisterCCallable("gdtools", "gdtools_context_create", (DL_FUNC)gdtools_context_create_try);
    R_RegisterCCallable("gdtools", "gdtools_context_set_font", (DL_FUNC)gdtools_context_set_font_try);
    R_RegisterCCallable("gdtools", "gdtools_context_extents", (DL_FUNC)gdtools_context_extents_try);
    R_RegisterCCallable("gdtools", "gdtools_fontfile_context_create", (DL_FUNC)gdtools_fontfile_context_create_try);
    R_RegisterCCallable("gdtools", "gdtools_fontfile_context_set_font", (DL_FUNC)gdtools_fontfile_context_set_font_try);
    R_RegisterCCallable("gdtools", "gdtools_fontfile_context_extents", (DL_FUNC)gdtools_fontfile_context_extents_try);
    R_RegisterCCallable("gdtools", "gdtools_font_context_create", (DL_FUNC)gdtools_font_context_create_try);
    R_RegisterCCallable("gdtools", "gdtools_font_context_set_font", (DL_FUNC)gdtools_font_context_set_font_try);
    R_RegisterCCallable("gdtools", "gdtools_font_context_extents", (DL_FUNC)gdtools_font_context_extents_try);
    R_RegisterCCallable("gdtools", "gdtools_font_context_fontname", (DL_FUNC)gdtools_font_context_fontname_try);
    R_RegisterCCallable("gdtools", "gdtools_raster_to_str", (DL_FUNC)gdtools_raster_to_str_try);
    R_RegisterCCallable("gdtools", "gdtools_raster_to_file", (DL_FUNC)gdtools_raster_to_file_try);
    R_RegisterCCallable("gdtools", "gdtools_raster_png_", (DL_FUNC)gdtools_raster_png__try);
    R_RegisterCCallable("gdtools", "gdtools_base64_raster_encode", (DL_FUNC)gdtools_base64_raster_encode_try);
    R_RegisterCCallable("gdtools", "gdtools_base64_file_encode", (DL_FUNC)gdtools_base64_file_encode_try);
    R_RegisterCCallable("gdtools", "gdtools_RcppExport_validate", (DL_FUNC)gdtools_RcppExport_validate);
    return R_NilValue;
}
