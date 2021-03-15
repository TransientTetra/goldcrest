cmake_minimum_required(VERSION 3.16)
set(BINARY ${CMAKE_PROJECT_NAME}_tst)

set(CMAKE_CXX_STANDARD 17)

find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

set(
        TST

        test.cpp
        main.cpp
        central_bus/central_bus_tests.cpp
)
set(TST ${TST})
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(BINARY ${PROJECT_SOURCE_DIR}/include)
add_executable(${BINARY} ${TST})

if(MSVC)
    # necessary because of gtest linking mismatch when using visual studio
    set_property(TARGET ${BINARY} PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME} GTest::gtest Threads::Threads)

gtest_discover_tests(${BINARY})
