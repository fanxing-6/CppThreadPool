cmake_minimum_required(VERSION 3.27)
project(CppThreadPool)

set(PROJECT_NAME "CppThreadPool")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /std:c11")

#编译单元测试开关
option(BUILD_POOL_TEST "Build pool test" ON)
option(BUILD_POOL_EXAMPLES "Build pool examples" ON)

set(LIBS ${LIBS} winmm iphlpapi ws2_32 dbghelp)

set(INCDIRS . lib ${CMAKE_BINARY_DIR})
include_directories(${INCDIRS})

add_subdirectory(src)

if (BUILD_POOL_EXAMPLES)
    add_subdirectory(examples)
endif ()


if (BUILD_POOL_TEST)
    enable_testing()
    find_package(GTest CONFIG REQUIRED)
    add_subdirectory(tests)
endif ()