#pragma once

#ifndef LOG_H_
#define LOG_H_


#include <iostream>
#include <string>

#include "Time.h"

namespace LOG {
	//使用 inline 关键字避免重复定义

	inline std::string _defaultModule = "Main";

	inline void INFO(std::string info, std::string module = _defaultModule) { std::cout << std::format("[{}][INFO][{}]{}", Time::GetCurrentTime(), module, info) << '\n'; }
	inline void WARING(std::string warning, std::string module = _defaultModule) { std::cout << std::format("[{}][WARING][{}]{}", Time::GetCurrentTime(), module, warning) << '\n'; }
	inline void ERROR(std::string error, std::string module = _defaultModule) { std::cout << std::format("[{}][ERROR][{}]{}", Time::GetCurrentTime(), module, error) << '\n'; }

	//TODO: colorful print
	inline void DEBUG(std::string debug, std::string module = _defaultModule) {
		std::cout << std::format("[{}][DEBUG][{}]{}", Time::GetCurrentTime(), module, debug) << '\n';
	}

	inline void IGNORABLE(std::string ignorable, std::string module = _defaultModule) {
		std::cout << std::format("[{}][IGNORABLE][{}]{}", Time::GetCurrentTime(), module, ignorable) << '\n';
	}

	inline void SUCCESS(std::string success, std::string module = _defaultModule) {
		std::cout << std::format("[{}][SUCCESS][{}]{}", Time::GetCurrentTime(), module, success) << '\n';
	}

	inline void FAILED(std::string failed, std::string module = _defaultModule) {
		std::cout << std::format("[{}][FAILED][{}]{}", Time::GetCurrentTime(), module, failed) << '\n';
	}
}

#endif // LOG_H_