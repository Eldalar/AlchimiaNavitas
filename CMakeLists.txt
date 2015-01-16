project(AlchimiaNavitas)
cmake_minimum_required(VERSION 2.8)

file( GLOB_RECURSE INC_LIST include/*)
file( GLOB_RECURSE SRC_LIST src/*)
file( GLOB_RECURSE TST_LIST tests/*)
LIST(APPEND SRC_LIST ${INC_LIST} ${TST_LIST})
add_executable(${PROJECT_NAME} ${SRC_LIST})

set (CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/)
# Find Ogre
find_package(OGRE REQUIRED)
include_directories(${OGRE_INCLUDE_DIRS})


target_link_libraries(${PROJECT_NAME} ${OGRE_LIBRARIES})
