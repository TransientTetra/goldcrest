cmake_minimum_required(VERSION 3.16)
set(BINARY ${CMAKE_PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)
set(
        SRC
        central_bus/central_bus.cpp
)
set(SRC ${SRC})

include_directories(${PROJECT_SOURCE_DIR}/include BINARY)
add_library(${BINARY} STATIC ${SRC})