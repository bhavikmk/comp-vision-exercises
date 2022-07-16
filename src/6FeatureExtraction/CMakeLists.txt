cmake_minimum_required(VERSION 3.0)
project(main LANGUAGES CXX)

find_package(OpenCV REQUIRED)

add_executable(surf surf.cpp)
target_include_directories(surf PRIVATE include)
target_link_libraries(surf ${OpenCV_LIBS})

add_executable(harris harris.cpp)
target_include_directories(harris PRIVATE include)
target_link_libraries(harris ${OpenCV_LIBS})
