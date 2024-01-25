#pragma once

#include <iostream>
#include <string>

#include "Time.h"

namespace LOG {
	std::string _defaultModule = "Main";

	void INFO(std::string info, std::string module = _defaultModule) { std::cout << std::format("[{}][INFO][{}]{}", Time::GetCurrentTime(), module, info) << '\n'; }
	void WARING(std::string warning, std::string module = _defaultModule) { std::cout << std::format("[{}][WARING][{}]{}", Time::GetCurrentTime(), module, warning) << '\n'; }
	void ERROR(std::string error, std::string module = _defaultModule) { std::cout << std::format("[{}][ERROR][{}]{}", Time::GetCurrentTime(), module, error) << '\n'; }

	//TODO: colorful print
	void DEBUG(std::string debug, std::string module = _defaultModule) {
		std::cout << std::format("[{}][DEBUG][{}]{}", Time::GetCurrentTime(), module, debug) << '\n';
	}

	void IGNORABLE(std::string ignorable, std::string module = _defaultModule) {
		std::cout << std::format("[{}][IGNORABLE][{}]{}", Time::GetCurrentTime(), module, ignorable) << '\n';
	}

	void SUCCESS(std::string success, std::string module = _defaultModule) {
		std::cout << std::format("[{}][SUCCESS][{}]{}", Time::GetCurrentTime(), module, success) << '\n';
	}

	void FAILED(std::string failed, std::string module = _defaultModule) {
		std::cout << std::format("[{}][FAILED][{}]{}", Time::GetCurrentTime(), module, failed) << '\n';
	}
}