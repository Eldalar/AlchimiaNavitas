project(AlchimiaNavitas)
cmake_minimum_required(VERSION 2.8)

file( GLOB_RECURSE INC_LIST include/*)
file( GLOB_RECURSE SRC_LIST src/*)
file( GLOB_RECURSE TST_LIST tests/*)
LIST(APPEND SRC_LIST ${INC_LIST} ${TST_LIST})
add_executable(${PROJECT_NAME} ${SRC_LIST})

set (CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/)

if(CMAKE_BUILD_TYPE STREQUAL "Debug") #Debug
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib-debug)
    set(LIB_INSTALL_DIR ${CMAKE_SOURCE_DIR}/lib-debug)
    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin-dbg)
    set(DEBUG true)
else() # Release
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
    set(LIB_INSTALL_DIR ${CMAKE_SOURCE_DIR}/lib)
    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
    set(RELEASE true)
endif()

# Find Infectorpp
find_package(Infector REQUIRED)
# Add Infectorpp
include_directories(${INFECTOR_INCLUDE_DIR})

# Find SFML
set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2 COMPONENTS graphics window system audio main)
# Add SFML
include_directories(${SFML_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})
target_link_libraries(${PROJECT_NAME} ${SFML_DEPENDENCIES})

# Set Compiler Flags
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-Wall -Werror -std=c++1y")


target_link_libraries(${PROJECT_NAME} ${OGRE_LIBRARIES})

include_directories(include)
