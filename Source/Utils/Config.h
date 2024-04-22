#pragma once

#include <string>

typedef std::string ConfigKey;
typedef std::string ConfigValue;

namespace Config{
	ConfigValue read(ConfigKey key);
	ConfigValue write(ConfigKey key, ConfigValue value);
}