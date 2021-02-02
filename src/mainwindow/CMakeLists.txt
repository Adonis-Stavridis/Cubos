add_library(mainwindow
	mainwindow.cpp
	mainwindow.h
	mainwindow.ui
)

target_include_directories(mainwindow PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(mainwindow PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
