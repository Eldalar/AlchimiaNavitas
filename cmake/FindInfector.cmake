
# define the list of search paths for headers and libraries
set(FIND_INFECTOR_PATHS
    ${INFECTOR_ROOT}
    $ENV{INFECTOR_ROOT}
    ~/Library/Frameworks
    /Library/Frameworks
    /usr/local
    /usr
    /sw
    /opt/local
    /opt/csw
    /opt)

# find the Infector include directory
find_path(INFECTOR_INCLUDE_DIR Infectorpp/InfectorContainer.hpp
          PATH_SUFFIXES include
          PATHS ${FIND_INFECTOR_PATHS})

if( NOT INFECTOR_INCLUDE_DIR )
    message(FATAL_ERROR "Unable to find Infector")
endif()
