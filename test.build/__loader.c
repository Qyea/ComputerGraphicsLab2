
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/tracing.h"
#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 15 > 0
static unsigned char *bytecode_data[15];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_PIL(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BlpImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BufrStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$CurImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DcxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$DdsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$EpsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ExifTags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FliImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FpxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$FtexImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GbrImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GribStubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Hdf5StubImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcnsImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IcoImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageCms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageOps(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageTk(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageWin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImtImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$IptcImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Jpeg2KImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$McIdasImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MicImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpegImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MspImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PalmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcdImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PcxImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PdfParser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PixarImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PsdImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SgiImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SpiderImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$SunImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TgaImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WebPImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$WmfImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XVThumbImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XbmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$XpmImagePlugin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_deprecate(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$features(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$commontypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cparser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$error(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$ffiplatform(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$lock(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$model(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$pkgconfig(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_cpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_gen(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$verifier(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cv2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cv2$load_config_py3(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$ElementTree(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$cElementTree(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$expatbuilder(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$expatreader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$minidom(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$pulldom(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$sax(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_defusedxml$xmlrpc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_array_like(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_char_codes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_dtype_like(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_nbit(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_nested_sequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_scalars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_shape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils$_inspect(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_machar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_bootstrap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pywin32_system32(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_threadpoolctl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"PIL", modulecode_PIL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"PIL.BlpImagePlugin", modulecode_PIL$BlpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\154\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\155\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.BufrStubImagePlugin", modulecode_PIL$BufrStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\102\165\146\162\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.CurImagePlugin", modulecode_PIL$CurImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\103\165\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DcxImagePlugin", modulecode_PIL$DcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.DdsImagePlugin", modulecode_PIL$DdsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\104\144\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.EpsImagePlugin", modulecode_PIL$EpsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\160\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ExifTags", modulecode_PIL$ExifTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\105\170\151\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.FliImagePlugin", modulecode_PIL$FliImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\154\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FpxImagePlugin", modulecode_PIL$FpxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\160\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.FtexImagePlugin", modulecode_PIL$FtexImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\106\164\145\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GbrImagePlugin", modulecode_PIL$GbrImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\142\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\107\162\141\144\151\145\156\164\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\151\155\160\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.GribStubImagePlugin", modulecode_PIL$GribStubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\107\162\151\142\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Hdf5StubImagePlugin", modulecode_PIL$Hdf5StubImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\110\144\146\65\123\164\165\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcnsImagePlugin", modulecode_PIL$IcnsImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\156\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IcoImagePlugin", modulecode_PIL$IcoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\143\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.ImImagePlugin", modulecode_PIL$ImImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Image", modulecode_PIL$Image, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\56\160\171"
#endif
},
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\150\157\160\163\56\160\171"
#endif
},
    {"PIL.ImageCms", modulecode_PIL$ImageCms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\155\163\56\160\171"
#endif
},
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\103\157\154\157\162\56\160\171"
#endif
},
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\106\151\154\164\145\162\56\160\171"
#endif
},
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\115\157\144\145\56\160\171"
#endif
},
    {"PIL.ImageOps", modulecode_PIL$ImageOps, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\117\160\163\56\160\171"
#endif
},
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\120\141\154\145\164\164\145\56\160\171"
#endif
},
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\123\150\157\167\56\160\171"
#endif
},
    {"PIL.ImageTk", modulecode_PIL$ImageTk, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\124\153\56\160\171"
#endif
},
    {"PIL.ImageWin", modulecode_PIL$ImageWin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\141\147\145\127\151\156\56\160\171"
#endif
},
    {"PIL.ImtImagePlugin", modulecode_PIL$ImtImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\155\164\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.IptcImagePlugin", modulecode_PIL$IptcImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\111\160\164\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.Jpeg2KImagePlugin", modulecode_PIL$Jpeg2KImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\62\113\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\112\160\145\147\120\162\145\163\145\164\163\56\160\171"
#endif
},
    {"PIL.McIdasImagePlugin", modulecode_PIL$McIdasImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\143\111\144\141\163\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MicImagePlugin", modulecode_PIL$MicImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\151\143\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpegImagePlugin", modulecode_PIL$MpegImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\145\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\160\157\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.MspImagePlugin", modulecode_PIL$MspImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\115\163\160\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\145\164\164\145\106\151\154\145\56\160\171"
#endif
},
    {"PIL.PalmImagePlugin", modulecode_PIL$PalmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\141\154\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcdImagePlugin", modulecode_PIL$PcdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PcxImagePlugin", modulecode_PIL$PcxImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\143\170\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfImagePlugin", modulecode_PIL$PdfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PdfParser", modulecode_PIL$PdfParser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\144\146\120\141\162\163\145\162\56\160\171"
#endif
},
    {"PIL.PixarImagePlugin", modulecode_PIL$PixarImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\151\170\141\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\156\147\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PsdImagePlugin", modulecode_PIL$PsdImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\163\144\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\120\171\101\143\143\145\163\163\56\160\171"
#endif
},
    {"PIL.SgiImagePlugin", modulecode_PIL$SgiImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\147\151\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SpiderImagePlugin", modulecode_PIL$SpiderImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\160\151\144\145\162\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.SunImagePlugin", modulecode_PIL$SunImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\123\165\156\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TgaImagePlugin", modulecode_PIL$TgaImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\147\141\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\124\151\146\146\124\141\147\163\56\160\171"
#endif
},
    {"PIL.WebPImagePlugin", modulecode_PIL$WebPImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\145\142\120\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.WmfImagePlugin", modulecode_PIL$WmfImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\127\155\146\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XVThumbImagePlugin", modulecode_PIL$XVThumbImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\126\124\150\165\155\142\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XbmImagePlugin", modulecode_PIL$XbmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\142\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL.XpmImagePlugin", modulecode_PIL$XpmImagePlugin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\130\160\155\111\155\141\147\145\120\154\165\147\151\156\56\160\171"
#endif
},
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\142\151\156\141\162\171\56\160\171"
#endif
},
    {"PIL._deprecate", modulecode_PIL$_deprecate, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\144\145\160\162\145\143\141\164\145\56\160\171"
#endif
},
    {"PIL._util", modulecode_PIL$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\165\164\151\154\56\160\171"
#endif
},
    {"PIL._version", modulecode_PIL$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"PIL.features", modulecode_PIL$features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\120\111\114\134\146\145\141\164\165\162\145\163\56\160\171"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\155\157\155\40\151\155\40\141\40\160\162\157\147\162\141\155\155\145\162\134\154\145\163\163\157\156\163\40\65\40\163\145\155\134\113\107\134\154\141\142\62\134\164\145\163\164\56\160\171"
#endif
},
    {"cffi", modulecode_cffi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"cffi.api", modulecode_cffi$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\141\160\151\56\160\171"
#endif
},
    {"cffi.commontypes", modulecode_cffi$commontypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\143\157\155\155\157\156\164\171\160\145\163\56\160\171"
#endif
},
    {"cffi.cparser", modulecode_cffi$cparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\143\160\141\162\163\145\162\56\160\171"
#endif
},
    {"cffi.error", modulecode_cffi$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\145\162\162\157\162\56\160\171"
#endif
},
    {"cffi.ffiplatform", modulecode_cffi$ffiplatform, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\146\146\151\160\154\141\164\146\157\162\155\56\160\171"
#endif
},
    {"cffi.lock", modulecode_cffi$lock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\154\157\143\153\56\160\171"
#endif
},
    {"cffi.model", modulecode_cffi$model, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\155\157\144\145\154\56\160\171"
#endif
},
    {"cffi.pkgconfig", modulecode_cffi$pkgconfig, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\160\153\147\143\157\156\146\151\147\56\160\171"
#endif
},
    {"cffi.vengine_cpy", modulecode_cffi$vengine_cpy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\166\145\156\147\151\156\145\137\143\160\171\56\160\171"
#endif
},
    {"cffi.vengine_gen", modulecode_cffi$vengine_gen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\166\145\156\147\151\156\145\137\147\145\156\56\160\171"
#endif
},
    {"cffi.verifier", modulecode_cffi$verifier, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\146\146\151\134\166\145\162\151\146\151\145\162\56\160\171"
#endif
},
    {"cv2", modulecode_cv2, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\166\62\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"cv2.load_config_py3", modulecode_cv2$load_config_py3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\166\62\134\154\157\141\144\137\143\157\156\146\151\147\137\160\171\63\56\160\171"
#endif
},
    {"defusedxml", modulecode_defusedxml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"defusedxml.ElementTree", modulecode_defusedxml$ElementTree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\105\154\145\155\145\156\164\124\162\145\145\56\160\171"
#endif
},
    {"defusedxml.cElementTree", modulecode_defusedxml$cElementTree, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\143\105\154\145\155\145\156\164\124\162\145\145\56\160\171"
#endif
},
    {"defusedxml.common", modulecode_defusedxml$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"defusedxml.expatbuilder", modulecode_defusedxml$expatbuilder, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\145\170\160\141\164\142\165\151\154\144\145\162\56\160\171"
#endif
},
    {"defusedxml.expatreader", modulecode_defusedxml$expatreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\145\170\160\141\164\162\145\141\144\145\162\56\160\171"
#endif
},
    {"defusedxml.minidom", modulecode_defusedxml$minidom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\155\151\156\151\144\157\155\56\160\171"
#endif
},
    {"defusedxml.pulldom", modulecode_defusedxml$pulldom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\160\165\154\154\144\157\155\56\160\171"
#endif
},
    {"defusedxml.sax", modulecode_defusedxml$sax, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\163\141\170\56\160\171"
#endif
},
    {"defusedxml.xmlrpc", modulecode_defusedxml$xmlrpc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\145\146\165\163\145\144\170\155\154\134\170\155\154\162\160\143\56\160\171"
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\143\157\156\146\151\147\137\137\56\160\171"
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\144\151\163\164\162\151\142\165\164\157\162\137\151\156\151\164\56\160\171"
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\160\171\164\145\163\164\164\145\163\164\145\162\56\160\171"
#endif
},
    {"numpy._typing", modulecode_numpy$_typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy._typing._array_like", modulecode_numpy$_typing$_array_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\141\162\162\141\171\137\154\151\153\145\56\160\171"
#endif
},
    {"numpy._typing._char_codes", modulecode_numpy$_typing$_char_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\143\150\141\162\137\143\157\144\145\163\56\160\171"
#endif
},
    {"numpy._typing._dtype_like", modulecode_numpy$_typing$_dtype_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\144\164\171\160\145\137\154\151\153\145\56\160\171"
#endif
},
    {"numpy._typing._nbit", modulecode_numpy$_typing$_nbit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\156\142\151\164\56\160\171"
#endif
},
    {"numpy._typing._nested_sequence", modulecode_numpy$_typing$_nested_sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\156\145\163\164\145\144\137\163\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"numpy._typing._scalars", modulecode_numpy$_typing$_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy._typing._shape", modulecode_numpy$_typing$_shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\163\150\141\160\145\56\160\171"
#endif
},
    {"numpy._utils", modulecode_numpy$_utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\165\164\151\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy._utils._inspect", modulecode_numpy$_utils$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\165\164\151\154\163\134\137\151\156\163\160\145\143\164\56\160\171"
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\160\171\63\153\56\160\171"
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\163\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\56\160\171"
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\137\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\151\156\164\145\162\156\141\154\56\160\171"
#endif
},
    {"numpy.core._machar", modulecode_numpy$core$_machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\141\143\150\141\162\56\160\171"
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\163\164\162\151\156\147\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\164\171\160\145\137\141\154\151\141\163\145\163\56\160\171"
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\165\146\165\156\143\137\143\157\156\146\151\147\56\160\171"
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\141\162\162\141\171\160\162\151\156\164\56\160\171"
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\144\145\146\143\150\141\162\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\145\151\156\163\165\155\146\165\156\143\56\160\171"
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\162\157\155\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\147\145\164\154\151\155\151\164\163\56\160\171"
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\145\155\155\141\160\56\160\171"
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\165\154\164\151\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\157\166\145\162\162\151\144\145\163\56\160\171"
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\165\155\141\164\150\56\160\171"
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\164\171\160\145\163\154\151\142\56\160\171"
#endif
},
    {"numpy.dtypes", modulecode_numpy$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\144\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.exceptions", modulecode_numpy$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\56\160\171"
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\150\145\154\160\145\162\56\160\171"
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\144\141\164\141\163\157\165\162\143\145\56\160\171"
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\151\157\164\157\157\154\163\56\160\171"
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\160\141\144\56\160\171"
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\163\145\164\157\160\163\56\160\171"
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\164\145\162\141\164\157\162\56\160\171"
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\150\151\163\164\157\147\162\141\155\163\56\160\171"
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\151\156\144\145\170\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\155\151\170\151\156\163\56\160\171"
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\141\156\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\160\171\151\157\56\160\171"
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\143\151\155\141\164\150\56\160\171"
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\164\162\151\144\145\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\167\157\144\151\155\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\171\160\145\137\143\150\145\143\153\56\160\171"
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\146\165\156\143\154\151\153\145\56\160\171"
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\154\151\156\141\154\147\56\160\171"
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\143\157\162\145\56\160\171"
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\145\170\164\162\141\163\56\160\171"
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\155\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\144\145\146\155\141\164\162\151\170\56\160\171"
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\160\157\154\171\142\141\163\145\56\160\171"
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\143\150\145\142\171\163\150\145\166\56\160\171"
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\56\160\171"
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\137\145\56\160\171"
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\141\147\165\145\162\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\145\147\145\156\144\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\160\151\143\153\154\145\56\160\171"
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pywin32_bootstrap", modulecode_pywin32_bootstrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\167\151\156\63\62\134\154\151\142\134\160\171\167\151\156\63\62\137\142\157\157\164\163\164\162\141\160\56\160\171"
#endif
},
    {"pywin32_system32", modulecode_pywin32_system32, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\167\151\156\63\62\137\163\171\163\164\145\155\63\62"
#endif
},
    {"threadpoolctl", modulecode_threadpoolctl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\164\150\162\145\141\144\160\157\157\154\143\164\154\56\160\171"
#endif
},
    {"numpy.testing", NULL, 0, 3943, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\164\145\163\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"packaging", NULL, 1, 523, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"packaging._structures", NULL, 2, 3643, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\137\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"packaging.version", NULL, 3, 21027, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\143\153\141\147\151\156\147\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pycparser", NULL, 4, 3200, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pycparser.ast_transforms", NULL, 5, 5513, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\141\163\164\137\164\162\141\156\163\146\157\162\155\163\56\160\171"
#endif
},
    {"pycparser.c_ast", NULL, 6, 53233, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\143\137\141\163\164\56\160\171"
#endif
},
    {"pycparser.c_lexer", NULL, 7, 18584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\143\137\154\145\170\145\162\56\160\171"
#endif
},
    {"pycparser.c_parser", NULL, 8, 93488, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\143\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"pycparser.lextab", NULL, 9, 6942, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\154\145\170\164\141\142\56\160\171"
#endif
},
    {"pycparser.ply", NULL, 10, 220, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\160\154\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pycparser.ply.lex", NULL, 11, 43987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\160\154\171\134\154\145\170\56\160\171"
#endif
},
    {"pycparser.ply.yacc", NULL, 12, 110004, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\160\154\171\134\171\141\143\143\56\160\171"
#endif
},
    {"pycparser.plyparser", NULL, 13, 6468, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\160\154\171\160\141\162\163\145\162\56\160\171"
#endif
},
    {"pycparser.yacctab", NULL, 14, 193273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\105\72\134\161\171\145\141\134\146\157\162\40\143\157\144\144\151\156\147\134\160\171\164\150\157\156\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\143\160\141\162\163\145\162\134\171\141\143\143\164\141\142\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(PyThreadState *tstate) {
    static bool init_done = false;

    if (init_done == false) {
        // Note needed for mere data.
        loadConstantsBlob(tstate, (PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(PyThreadState *tstate) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob(tstate);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Calling _loadBytesCodesBlob.");
    _loadBytesCodesBlob(NULL);

    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Updating frozen module table sizes.");

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

