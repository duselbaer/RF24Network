include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_library(
  RF24Network STATIC

  Sync.cpp
  RF24Network.cpp
)
