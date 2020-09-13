#pragma once

#ifdef ZDC_PLATFORM_WINDOWS
	#ifdef ZDC_BUILD_DLL
		#define ZODIAC_API __declspec(dllexport)
	#else
		#define ZODIAC_API __declspec(dllimport)
	#endif
#else
	#error Zodiac only supports Windows!
#endif
