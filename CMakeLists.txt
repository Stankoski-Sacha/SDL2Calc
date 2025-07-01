cmake_minimum_required(VERSION 3.10.0)
project(calc VERSION 0.1.0 LANGUAGES C CXX)

find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_TTF_INCLUDE_DIRS})

# Add executable with your source files (list them all here)
add_executable(calc main.cpp init.cpp)

# Link SDL2 and SDL2_ttf libraries to your executable
target_link_libraries(calc ${SDL2_LIBRARIES} ${SDL2_TTF_LIBRARIES})

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
