add_executable (test "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET test PROPERTY CXX_STANDARD 20)
endif()