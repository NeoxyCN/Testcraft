#pragma once

#include <chrono>
#include <ctime>
#include <string>

namespace Time {
	inline auto GetCurrentTime() {
		auto _currentTime = std::time(0);
		auto _now = std::localtime(&_currentTime);
		std::string currentTime = std::format("{}:{}:{}", _now->tm_hour, _now->tm_min, _now->tm_sec);
		return currentTime;
	}

	inline auto GetTimeStamp() {
		auto timestamp = std::chrono::system_clock::now().time_since_epoch().count();

		return timestamp;
	}
}