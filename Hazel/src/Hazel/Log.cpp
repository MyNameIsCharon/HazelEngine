#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Hazel {
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$"); // these are custom spdlog syntax that define log type. can be found on github. here they define color, time stamp[%T], name of logger %n, message %v%$
		s_CoreLogger = spdlog::stdout_color_mt("Hazel");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
    } 
}
