cmake_minimum_required(VERSION 3.16)
set(BINARY ${CMAKE_PROJECT_NAME}_tst)

set(CMAKE_CXX_STANDARD 17)

find_package(Threads REQUIRED)

set(
        TST

        test.cpp
        main.cpp
        central_bus/central_bus_tests.cpp
)
set(TST ${TST})
include_directories(BINARY ${PROJECT_SOURCE_DIR}/include)
add_executable(${BINARY} ${TST})
add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME} gtest Threads::Threads)

