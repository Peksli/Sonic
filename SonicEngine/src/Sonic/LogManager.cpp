#include <spdlog/sinks/stdout_color_sinks.h>
#include "LogManager.h"


namespace Sonic
{

	std::shared_ptr<spdlog::logger> LogManager::sonic_consoleLogger;
	std::shared_ptr<spdlog::logger> LogManager::user_consoleLogger;

	void LogManager::startUp()
	{
		std::shared_ptr<spdlog::sinks::stdout_color_sink_mt> consoleSink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();

		sonic_consoleLogger = std::make_shared<spdlog::logger>(SONIC_LOGGER_NAME, consoleSink); spdlog::register_logger(sonic_consoleLogger);
		user_consoleLogger = std::make_shared<spdlog::logger>(USER_LOGGER_NAME, consoleSink); spdlog::register_logger(user_consoleLogger);

		sonic_consoleLogger->set_level(spdlog::level::trace);
		user_consoleLogger->set_level(spdlog::level::trace);
	}

	void LogManager::destroy()
	{
		spdlog::shutdown();
	}

}