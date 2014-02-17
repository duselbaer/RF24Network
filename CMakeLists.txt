include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_library(
  RF24Network STATIC

  Sync.h
  RF24Network.h
)

# No Sources --> set link language manually
SET_TARGET_PROPERTIES(RF24Network PROPERTIES LINKER_LANGUAGE CXX)
