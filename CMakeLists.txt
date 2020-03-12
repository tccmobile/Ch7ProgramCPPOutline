cmake_minimum_required(VERSION 3.14)
project(Ch7Program)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ch7Program main.cpp ItemToPurchase.cpp ItemToPurchase.h ShoppingCart.cpp ShoppingCart.h)