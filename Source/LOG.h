#pragma once

#include <iostream>
#include <string>

#include "Time.h"

namespace LOG {
	std::string defaultModule = "Main";

	void INFO(std::string info, std::string module = defaultModule) { std::cout << "[" << Time::GetCurrentTime() << "]" << "[INFO]" << "[" << module << "]" << info << std::endl; }
	void WARING(std::string warning, std::string module = defaultModule) { std::cout << "[" << Time::GetCurrentTime() << "]" << "[WARING]" << "[" << module << "]" << warning << std::endl; }
	void ERROR(std::string error, std::string module = defaultModule) { std::cout << "[" << Time::GetCurrentTime() << "]" << "[ERROR]" << "[" << module << "]" << error << std::endl; }

	//TODO: colorful print
	void DEBUG(std::string debug, std::string module = defaultModule) {
		std::cout << "[" << Time::GetCurrentTime() << "]" << "[DEBUG]" << "[" << module << "]" << debug << std::endl;
	}

	void IGNORABLE(std::string ignorable, std::string module = defaultModule) {
		std::cout << "[" << Time::GetCurrentTime() << "]" << "[IGNORABLE]" << "[" << module << "]" << ignorable << std::endl;
	}

	void SUCCESS(std::string success, std::string module = defaultModule) {
		std::cout << "[" << Time::GetCurrentTime() << "]" << "[SUCCESS]" << "[" << module << "]" << success << std::endl;
	}

	void FAILED(std::string failed, std::string module = defaultModule) {
		std::cout << "[" << Time::GetCurrentTime() << "]" << "[FAILED]" << "[" << module << "]" << failed << std::endl;
	}
}