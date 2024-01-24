#pragma once

#include <iostream>
#include <string>

#include "Time.h"

namespace LOG {
	std::string _defaultModule = "Main";

	void INFO(std::string info, std::string module = _defaultModule) { std::cout << std::format("[{}][INFO][{}]{}", Time::GetCurrentTime(), module, info) << std::endl; }
	void WARING(std::string warning, std::string module = _defaultModule) { std::cout << std::format("[{}][WARING][{}]{}", Time::GetCurrentTime(), module, warning) << std::endl; }
	void ERROR(std::string error, std::string module = _defaultModule) { std::cout << std::format("[{}][ERROR][{}]{}", Time::GetCurrentTime(), module, error) << std::endl; }

	//TODO: colorful print
	void DEBUG(std::string debug, std::string module = _defaultModule) {
		std::cout << std::format("[{}][DEBUG][{}]{}", Time::GetCurrentTime(), module, debug) << std::endl;
	}

	void IGNORABLE(std::string ignorable, std::string module = _defaultModule) {
		std::cout << std::format("[{}][IGNORABLE][{}]{}", Time::GetCurrentTime(), module, ignorable) << std::endl;
	}

	void SUCCESS(std::string success, std::string module = _defaultModule) {
		std::cout << std::format("[{}][SUCCESS][{}]{}", Time::GetCurrentTime(), module, success) << std::endl;
	}

	void FAILED(std::string failed, std::string module = _defaultModule) {
		std::cout << std::format("[{}][FAILED][{}]{}", Time::GetCurrentTime(), module, failed) << std::endl;
	}
}