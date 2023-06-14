cmake_minimum_required(VERSION 3.17)
project(bigInteger)


set(CMAKE_CXX_STANDARD 17)

add_executable(main.cpp BigInteger.cpp BigInteger.h Rational.cpp Rational.h)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -Wconversion")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

#set(CMAKE_CXX_FLAGS “${CMAKE_CXX_FLAGS} -stdlib=libstdc++”)

#add_definitions(-D_GLIBCXX_USE_CXX11_ABI=0)
#add_definitions(-D CMAKE_C_COMPILER=/usr/bin/clang)
#add_definitions(-D CMAKE_CXX_COMPILER=/usr/bin/clang++)
#add_definitions(-D_GLIBCXX_DEBUG)