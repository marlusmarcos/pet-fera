cmake_minimum_required(VERSION 3.13)
project(pet fera
    DESCRIPTION "pet fera is an sistem to manage an pet shot"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXXSTANDARD_REQUIRED ON)

################################################

# Setting librarys
include_directories(include)

################################################
# Setting source 

file(GLOB SOURCE "src/*.cpp")

################################################
add_executable(mensagem ${SOURCE})
