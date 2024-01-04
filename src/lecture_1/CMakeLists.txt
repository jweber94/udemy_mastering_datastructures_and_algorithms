add_executable (test "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET test PROPERTY CXX_STANDARD 20)
endif()

target_include_directories(test PUBLIC ${Boost_INCLUDE_DIRS})
target_link_libraries(test ${Boost_LIBRARIES})