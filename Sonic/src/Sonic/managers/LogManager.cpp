#include "LogManager.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace Sonic {

	std::shared_ptr<spdlog::logger> LogManager::sonicLogger;
	std::shared_ptr<spdlog::logger> LogManager::userLogger;

	void LogManager::Initialize()
	{
		spdlog::set_level(spdlog::level::trace);

		std::shared_ptr<spdlog::sinks::stdout_color_sink_mt> consoleSink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
		consoleSink->set_pattern("[%Y-%m-%d] [%H:%M:%S] %v%$");

		sonicLogger = std::make_shared<spdlog::logger>("sonicLogger", consoleSink);
		userLogger = std::make_shared<spdlog::logger>("userLogger", consoleSink);
		spdlog::register_logger(sonicLogger);
		spdlog::register_logger(userLogger);

	}

	void LogManager::Shutdown()
	{
		spdlog::shutdown();
	}

}