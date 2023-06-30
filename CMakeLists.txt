cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

# using C++ 17
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(SRCS
  main.cpp
  mock.cpp 
  real.cpp
  wrapper.cpp 
)

set(HDRS
mock.hpp 
real.hpp
wrapper.hpp
wrapper_interface.hpp 
)

add_executable(testWrapper
  ${SRCS})