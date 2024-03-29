cmake_minimum_required(VERSION 2.8.2)

project(labo_5 CXX)

include(CTest)

set(CMAKE_CXX_STANDARD 14)

if (CMAKE_VERSION VERSION_LESS 3.2)
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "")
else()
    set(UPDATE_DISCONNECTED_IF_AVAILABLE "UPDATE_DISCONNECTED 1")
endif()

include(DownloadProject.cmake)
download_project(PROJ                googletest
        GIT_REPOSITORY      https://github.com/google/googletest.git
        GIT_TAG             master
        ${UPDATE_DISCONNECTED_IF_AVAILABLE}
        )

# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

# When using CMake 2.8.11 or later, header path dependencies
# are automatically added to the gtest and gmock targets.
# For earlier CMake versions, we have to explicitly add the
# required directories to the header search path ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include"
            "${gmock_SOURCE_DIR}/include")
endif()

# Trivial example using gtest and gmock
add_executable(labo_5 src/main.cpp src/Customer.cpp src/Rental.cpp src/Movie.cpp src/MovieState.cpp src/MovieState.h src/RegularMovieState.cpp src/RegularMovieState.h src/ChildrenMovieState.cpp src/ChildrenMovieState.h src/NewReleaseMovieState.cpp src/NewReleaseMovieState.h)
add_executable(tests test/example.cpp src/Customer.cpp test/CustomerTest.cpp src/Rental.cpp test/RentalTest.cpp test/MovieTest.cpp src/MovieState.cpp src/Movie.cpp src/MovieState.h src/RegularMovieState.cpp src/RegularMovieState.h src/ChildrenMovieState.cpp src/ChildrenMovieState.h src/NewReleaseMovieState.cpp src/NewReleaseMovieState.h test/mock_rental.h test/mock_movie.h)

target_link_libraries(tests gtest gmock_main)
add_test(NAME example_test COMMAND tests)
