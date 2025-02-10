# Download and make Catch2 available using FetchContent
include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0  # Change this to the desired Catch2 version
)
FetchContent_MakeAvailable(Catch2)

# Enable testing support
enable_testing()

# Gather all test source files.
# (Even though these files have a .h extension, we assume they contain test definitions.)
file(GLOB_RECURSE TEST_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/test_catch2/*.cpp")

# Create the test executable; you can name it "tests" or anything you prefer.
add_executable(tests ${TEST_SOURCES})

# Link your test executable with your library and with Catch2's provided main
target_link_libraries(tests PRIVATE my_library Catch2::Catch2WithMain)

# Integrate with CTest and automatically discover tests from Catch2
include(CTest)
include(Catch)
catch_discover_tests(tests)
