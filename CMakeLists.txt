cmake_minimum_required(VERSION 3.15)

# Define project name and C++ standard
project(MyCppProject VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create the executable target
add_executable(MyProject 
    src/main.cpp
    src/greeter.cpp
)

# Specify where the compiler should look for header files
target_include_directories(MyProject PRIVATE
    include
)

