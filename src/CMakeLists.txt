#-------------------------------------------------------------------------------
#	LIBRARIES
#-------------------------------------------------------------------------------

add_library(mainwindow
	mainwindow/mainwindow.cpp
	mainwindow/mainwindow.h
	mainwindow/mainwindow.ui
	mainwindow/viewport.cpp
	mainwindow/viewport.h
)
target_include_directories(mainwindow PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/mainwindow")
target_link_libraries(mainwindow PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

#-------------------------------------------------------------------------------
#	EXECUTABLES
#-------------------------------------------------------------------------------

add_executable(Cubos
	core/main.cpp
)
target_link_libraries(Cubos PRIVATE Qt${QT_VERSION_MAJOR}::Widgets mainwindow)
