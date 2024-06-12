#pragma once

#ifdef POINTAGE_EXPORTS
	#ifdef POINTAGE_COMPILE
		#define POINTAGE_API __declspec(dllexport)
	#else
		#define POINTAGE_API __declspec(dllimport)
	#endif
	#ifdef __cplusplus
		#define NAME_MANGLING_BEGIN extern "C" {
		#define NAME_MANGLING_END }
	#endif
#else
	#ifdef POINTAGE_SHARED
		#define POINTAGE_API __declspec(dllimport)
		#ifdef __cplusplus
			#define NAME_MANGLING_BEGIN extern "C" {
			#define NAME_MANGLING_END }
		#endif
	#else	
		#define POINTAGE_API 
		#ifdef __cplusplus
			#define NAME_MANGLING_BEGIN
			#define NAME_MANGLING_END
		#endif
	#endif
#endif

