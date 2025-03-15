#ifndef LOG_MANAGER_H
#define LOG_MANAGER_H


#define SONIC_LOGGER_NAME "sonic_logger"
#define USER_LOGGER_NAME "user_logger"


#include <spdlog/spdlog.h>
#include "Core.h"



namespace Sonic
{

	class SONIC_API LogManager
	{
	public:
		static std::shared_ptr<spdlog::logger> sonic_consoleLogger;
		static std::shared_ptr<spdlog::logger> user_consoleLogger;

		static std::shared_ptr<spdlog::logger> GetSonicLogger() { return sonic_consoleLogger; }
		static std::shared_ptr<spdlog::logger> GetUserLogger() { return user_consoleLogger; }

		static void startUp();
		static void destroy();
	};

}


//Engine log macros
#define SONIC_TRACE(...)	if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->trace(__VA_ARGS__);
#define SONIC_DEBUG(...)	if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->debug(__VA_ARGS__);
#define SONIC_INFO(...)		if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->info(__VA_ARGS__);
#define SONIC_WARN(...)		if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->warn(__VA_ARGS__);
#define SONIC_ERROR(...)	if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->error(__VA_ARGS__);
#define SONIC_CRIT(...)		if(::Sonic::LogManager::GetSonicLogger() != nullptr)	::Sonic::LogManager::GetSonicLogger()->critical(__VA_ARGS__);


//User log macros
#define USER_TRACE(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->trace(__VA_ARGS__);
#define USER_DEBUG(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->debug(__VA_ARGS__);
#define USER_INFO(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->info(__VA_ARGS__);
#define USER_WARN(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->warn(__VA_ARGS__);
#define USER_ERROR(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->error(__VA_ARGS__);
#define USER_CRIT(...)		if(::Sonic::LogManager::GetUserLogger() != nullptr)		::Sonic::LogManager::GetUserLogger()->critical(__VA_ARGS__);


#endif