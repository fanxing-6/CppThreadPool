cmake_minimum_required(VERSION 3.27)
project(PoolTest)
set(TEST_SRC
        test.cpp
)


find_package(GTest CONFIG REQUIRED)

add_executable(pool_test ${TEST_SRC})

target_link_libraries(pool_test

        GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

add_test(NAME PoolTests COMMAND pool_test)