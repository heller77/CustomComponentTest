cmake_minimum_required(VERSION 3.1)
project(main CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# add_subdirectory(UserFolder)
add_subdirectory(Factory)
add_executable(main ./Engine/main.cpp ./Engine/CallFactory.cpp)

# target_link_libraries(main CustomComponentDLL)
target_link_libraries(main FactoryDLL)