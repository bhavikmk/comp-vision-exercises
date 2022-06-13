cmake_minimum_required(VERSION 3.0)
project(readWrite LANGUAGES CXX)

add_executable(${PROJECT_NAME} readImg.cpp)
# target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_14)
target_include_directories(${PROJECT_NAME} PRIVATE include)

find_package(OpenCV REQUIRED)
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
