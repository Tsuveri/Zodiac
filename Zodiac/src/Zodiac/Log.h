#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

// 17:40 

namespace Zodiac {

	class ZODIAC_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};				  
					  
}


// Core Log Messages
#define ZDC_CORE_FATAL(...)		::Zodiac::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define ZDC_CORE_ERROR(...)		::Zodiac::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ZDC_CORE_WARN(...)		::Zodiac::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ZDC_CORE_INFO(...)		::Zodiac::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ZDC_CORE_TRACE(...)		::Zodiac::Log::GetCoreLogger()->trace(__VA_ARGS__)


// Client Log Messages
#define ZDC_FATAL(...)			::Zodiac::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define ZDC_ERROR(...)			::Zodiac::Log::GetClientLogger()->error(__VA_ARGS__)
#define ZDC_WARN(...)			::Zodiac::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ZDC_INFO(...)			::Zodiac::Log::GetClientLogger()->info(__VA_ARGS__)
#define ZDC_TRACE(...)			::Zodiac::Log::GetClientLogger()->trace(__VA_ARGS__)