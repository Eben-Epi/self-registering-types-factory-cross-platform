cmake_minimum_required(VERSION 3.16.5)
project(test_self_factory)

set(CMAKE_CXX_STANDARD 17)

INCLUDE_DIRECTORIES(include)

add_executable(test_self_factory
        main.cpp
        src/CompressionMethodFactory/CompressionMethodFactory.cpp
        src/CompressionMethods/ZipCompression.cpp
        src/CompressionMethods/GZIPCompression.cpp
        src/CompressionMethods/BZCompression.cpp)