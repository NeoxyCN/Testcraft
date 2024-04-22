#pragma once

#include "LOG.h"
//TODO: Debug status and debug print
//macros: NDEBUG _DEBUG

void Debug(std::string debug) {
	LOG::DEBUG(debug);
}