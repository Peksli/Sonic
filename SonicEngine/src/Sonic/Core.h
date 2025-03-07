#pragma once


#ifdef PLATFORM_WINDOWS
	#ifdef SONIC_BUILD_DLL
		#define SONIC_API __declspec(dllexport)
	#else
		#define SONIC_API __declspec(dllimport)
	#endif
#else
	#error Sonic can work only on windows
#endif