//
// Created by Nil Folquer <nfolquer@gmail.com> on 31/12/2021.
//

#pragma once
#include <memory>
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace Logger {
class Log {
public:
    static void Init();

    inline static std::shared_ptr<spdlog::logger>& the() { return s_logger; }
private:
    static std::shared_ptr<spdlog::logger> s_logger;
};
}

// Defining some macros to help logging
#define LogTrace(...) ::Logger::the()->trace(__VA_ARGS__)
#define LogInfo(...) ::Logger::Log::the()->info(__VA_ARGS__)
#define LogWarn(...) ::Logger::the()->warn(__VA_ARGS__)
#define LogError(...) ::Logger::the()->error(__VA_ARGS__)
#define LogCritical(...) ::Logger::the()->critical(__VA_ARGS__)


