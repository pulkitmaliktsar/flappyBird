cmake_minimum_required(VERSION 3.16)
project(flappyBird LANGUAGES CXX)

# Use modern C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tell CMake where SFML is installed (adjust if needed)
set(SFML_DIR "C:/SFML/lib/cmake/SFML")

# Find SFML (3.0.2, components)
find_package(SFML 3 COMPONENTS Graphics Audio Window System REQUIRED) 

# Add your source files
add_executable(flappyBird
    flappyBird.cpp
    flappyBird.h
    main.cpp
 "AssetManager.cpp")

# Link SFML to your target
target_link_libraries(flappyBird PRIVATE
    SFML::Graphics
    SFML::Audio
    SFML::Window
    SFML::System
)

# Optional: put compiled exe into bin folder
set_target_properties(flappyBird PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Copy SFML DLLs after build
add_custom_command(TARGET flappyBird POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "C:/SFML/bin" $<TARGET_FILE_DIR:flappyBird>
)
