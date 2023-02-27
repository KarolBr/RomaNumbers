cmake_minimum_required(VERSION 3.22)

#set(ProjectName RomanNumbers)

project(RomanNumbers VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -pedantic -Werror)


include_directories(
    include
)

include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2
    GIT_TAG v2.13.9
    GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(Catch2)



add_subdirectory(configured)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(uts)

