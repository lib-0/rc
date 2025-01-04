cmake_minimum_required(VERSION 3.10)

project(G_0_rc VERSION 1.0 LANGUAGES C)

set(SOURCES
  src/rc.c
)

add_library(G_0_rc STATIC ${SOURCES})
set_target_properties(G_0_rc PROPERTIES
  OUTPUT_NAME "-0_rc"
)

target_include_directories(G_0_rc
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external_include
)

install(TARGETS G_0_rc
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(
  FILES
    include/-0_rc.h
  DESTINATION
    include
)

install(
  FILES
    include/-0/rc_functions.h
    include/-0/rc_shortcut.h
    include/-0/rc_types.h
  DESTINATION
    include/-0
)
