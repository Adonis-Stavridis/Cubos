add_executable(Cubos
	main.cpp
)

target_link_libraries(Cubos PRIVATE Qt${QT_VERSION_MAJOR}::Widgets mainwindow)
