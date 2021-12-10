cmake_minimum_required (VERSION 3.8)

project (
	"LWTimezonetracker"
	LANGUAGES CXX
	VERSION "1.0.0"
	)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX20_STANDARD_COMPILE_OPTION "-std:c++latest")
set(CMAKE_CXX20_EXTENSION_COMPILE_OPTION "-std:c++latest")


include(FetchContent)

FetchContent_Declare(
	cli11
	GIT_REPOSITORY https://github.com/CLIUtils/CLI11
	GIT_TAG        v2.1.2
)

FetchContent_MakeAvailable(cli11)


add_executable (LWTimezonetracker
	"src/main.cpp" "src/LWFormatter.hpp")

target_link_libraries(
	LWTimezonetracker
	PRIVATE
		CLI11::CLI11
)
