set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(worker STATIC Worker.cpp)
add_executable(main main.cpp)
target_link_libraries(main worker)

if (WITH_TESTS)
    add_executable(tests tests.cpp)
    target_link_libraries(tests gtest pthread worker)
endif()