#ifndef __config_h__
#define __config_h__


#include <windows.h>
#include <direct.h>
#include <io.h>
#include <sys/types.h>
#undef ALTERNATE
#undef FAILED
#undef WAVE_FORMAT_PCM


#ifdef __BIG_ENDIAN__ 
#define big_endian
#else
#undef big_endian
#endif

#ifdef _MSC_VER
#pragma warning(disable : 4018) // unsigned mismatch
#pragma warning(disable : 4244) // possible loss of data
#pragma warning(disable : 4554) // nanny

#define getcwd _getcwd
#define strdup _strdup
#define strcasecmp _stricmp
#define open _open
#define close _close
#define read _read
#define write _write
#define lseek _lseek
#define chdir _chdir
#define chsize _chsize
//#define fileno _fileno
#define putenv _putenv

#endif // _MSC_VER
#endif // __config_h__


