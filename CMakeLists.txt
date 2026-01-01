cmake_minimum_required(VERSION 3.15)
project(ws_client)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include WebSocket++ headers only
include_directories(
    ${CMAKE_SOURCE_DIR}/third_party
)

add_executable(ws_client
    src/main.cpp
)

# Windows socket library
target_link_libraries(ws_client ws2_32)
