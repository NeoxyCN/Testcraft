#pragma once

#include "LOG.h"

// 0 = default 
// 1 = snapshot
// 2 = fdistribution
#define RELEASE_TYPE 0
#define VERSION_MAJOR 0
#define VERSION_MINOR 0
#define VERSION_REVISION 1
#define VERSION_STATUS "Alpha"
#define VERSION_BUILDNUMBER 1
#define VERSION_SNAPSHOT_NAME "24w4a"
//TODO: Git commit
#define VERSION_COMMIT 0
#define VERSION_STR_(_I) #_I
#define VERSION_STR(_I) VERSION_STR_(_I)
#define VERSION_STRING_COMPILER_DATE __DATE__ " " \
									__TIME__
//TODO: Compiler type
#define VERSION_STRING_COMPILER "MSVC"
#define VERSION_STRING_RELEASE VERSION_STR(VERSION_MAJOR) "." \
							   VERSION_STR(VERSION_MINOR) "." \
							   VERSION_STR(VERSION_REVISION) " " \
							   VERSION_STATUS " " \
							   VERSION_STR(VERSION_BUILDNUMBER) " (" \
							   VERSION_STRING_COMPILER " " \
							   VERSION_STRING_COMPILER_DATE ")"
#define VERSION_STRING_SNAPSHOT VERSION_STR(VERSION_MAJOR) "." \
							    VERSION_STR(VERSION_MINOR) "." \
						  	    VERSION_STR(VERSION_REVISION) " " \
							    VERSION_STATUS " " \
							    VERSION_SNAPSHOT_NAME " (" \
								VERSION_STRING_COMPILER " " \
							    VERSION_STRING_COMPILER_DATE ")"


auto GetVerisonInfo() {
#if RELEASE_TYPE == 0
	return VERSION_STRING_RELEASE;
#elif RELEASE_TYPE == 1
	return VERSION_STRING_SNAPSHOT;
#elif RELEASE_TYPE == 2
	return VERSION_STRING_RELEASE;
#endif
}