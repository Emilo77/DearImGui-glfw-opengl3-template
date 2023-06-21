cmake_minimum_required(VERSION 3.22)
project(test)

set(CMAKE_CXX_STANDARD 17)

add_executable(test main.cpp GuiApplication.cpp)

find_package(glfw3 CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)


target_link_libraries(test PRIVATE glfw -lGL) # important: linking GL is necessary
target_link_libraries(test PRIVATE imgui::imgui)


