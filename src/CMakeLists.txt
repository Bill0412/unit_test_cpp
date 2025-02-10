# Create an interface (header-only) library target named "my_library"
add_library(my_library INTERFACE)

# Add the include directory for the library; adjust the path as needed
target_include_directories(my_library INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/catch2)
