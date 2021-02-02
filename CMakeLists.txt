#-------------------------------------------------------------------------------
#	CMAKE
#-------------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.10)
project(Cubos LANGUAGES CXX)

#-------------------------------------------------------------------------------
#	COMPILER
#-------------------------------------------------------------------------------

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(ERROR_FLAGS "-Wall -Werror -Wextra -Wfatal-errors -pedantic-errors")
set(DEBUG_FLAGS "-g -ggdb")
set(RELEASE_FLAGS "-O2")

set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "${DEBUG_FLAGS} ${ERROR_FLAGS}")
set(CMAKE_CXX_FLAGS_RELEASE "${RELEASE_FLAGS}")

#-------------------------------------------------------------------------------
#	QT
#-------------------------------------------------------------------------------

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

#-------------------------------------------------------------------------------
#	LIBRARIES
#-------------------------------------------------------------------------------

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets LinguistTools REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools REQUIRED)

cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)

include_directories(
	${GLFW_INCLUDE_PATH}
	${GLM_INCLUDE_PATH}
)

set(LIBS ${OPENGL_LIBRARY} ${GLFW_LIBRARY} Qt${QT_VERSION_MAJOR}::Widgets)

#-------------------------------------------------------------------------------
#	SUBDIRECTORIES
#-------------------------------------------------------------------------------

add_subdirectory(src)

# add_subdirectory(test)
