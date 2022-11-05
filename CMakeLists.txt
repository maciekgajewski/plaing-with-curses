find_package(Curses REQUIRED)
add_executable(cursed_demo curses_demo.cpp)

target_compile_options(cursed_demo PRIVATE -Wall -Wextra)
target_link_libraries(cursed_demo ${CURSES_LIBRARIES})
target_include_directories(cursed_demo PRIVATE ${CURSES_INCLUDE_DIR})