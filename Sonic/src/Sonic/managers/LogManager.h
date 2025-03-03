#pragma once

#include "../Core.h"
#include "spdlog/spdlog.h"

#define SONIC_DEFAULT_LOGGER_NAME "sonicLogger"
#define USER_DEFAULT_LOGGER_NAME "userLogger"


namespace Sonic {

	class SONIC_API LogManager
	{
	public:
		static const std::shared_ptr<spdlog::logger>& GetSonicLogger() { return sonicLogger; }
		static const std::shared_ptr<spdlog::logger>& GetUserLogger()  { return userLogger;  }

		static void Initialize();
		static void Shutdown();

	private:
		static std::shared_ptr<spdlog::logger> sonicLogger;
		static std::shared_ptr<spdlog::logger> userLogger;
	};

}


//Sonic log macros
#define SONIC_TRACE(...)	if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->trace(__VA_ARGS__)
#define SONIC_DEBUG(...)	if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->debug(__VA_ARGS__)
#define SONIC_INFO(...)		if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->info(__VA_ARGS__)
#define SONIC_WARN(...)		if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->warn(__VA_ARGS__)
#define SONIC_ERROR(...)	if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->error(__VA_ARGS__)
#define SONIC_CRITICAL(...)	if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->critical(__VA_ARGS__)
							   
							   
//User log macros			   
#define USER_TRACE(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->trace(__VA_ARGS__)
#define USER_DEBUG(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->debug(__VA_ARGS__)
#define USER_INFO(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->info(__VA_ARGS__)
#define USER_WARN(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->warn(__VA_ARGS__)
#define USER_ERROR(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->error(__VA_ARGS__)
#define USER_CRITICAL(...)	if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->critical(__VA_ARGS__)
