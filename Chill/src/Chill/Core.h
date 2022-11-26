#pragma once


#ifdef CH_PLATFORM_WINDOWS
	#ifdef CH_BUILD_DLL
		#define CHILL __declspec(dllexport)
	#else
		#define CHILL __declspec(dllimport)
	#endif // CH_BUILD_DLL
#else
	#error "Chill only support Windows."
#endif // CH_PLATFORM_WINDOWS