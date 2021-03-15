cmake_minimum_required(VERSION 3.16)
project(goldcrest)

set(CMAKE_CXX_STANDARD 17)
if (CMAKE_BUILD_TYPE MATCHES Debug)
    add_subdirectory(tst)
endif()
add_subdirectory(src)