add_library(worker STATIC Worker.cpp)
add_executable(main main.cpp)
target_link_libraries(main worker)


add_executable(tests tests.cpp)
target_link_libraries(tests gtest pthread worker)