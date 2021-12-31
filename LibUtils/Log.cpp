//
// Created by Nil Folquer <nfolquer@gmail.com> on 31/12/2021.
//

#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Logger {
std::shared_ptr<spdlog::logger> Log::s_logger;

void Logger::Log::Init() {
    spdlog::set_pattern("%^[%T] %n: %v%$");
    s_logger = spdlog::stdout_color_mt("LibGui");
    s_logger->set_level(spdlog::level::trace);
}

}
