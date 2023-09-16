cmake_minimum_required(VERSION 3.1)
project(main CXX)

# add_subdirectory(Component)
add_subdirectory(Factory)
add_executable(main main.cpp CallFactory.cpp)

# target_link_libraries(main CustomComponentDLL)
target_link_libraries(main FactoryDLL)