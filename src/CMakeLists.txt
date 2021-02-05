#-------------------------------------------------------------------------------
#	LIBRARIES
#-------------------------------------------------------------------------------

add_library(mainwindow
  mainwindow/mainwindow.cpp
  mainwindow/mainwindow.h
  mainwindow/mainwindow.ui
  mainwindow/viewport.cpp
  mainwindow/viewport.h
  ${RESOURCE_FILE}
)
target_include_directories(mainwindow PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/mainwindow")
target_link_libraries(mainwindow PRIVATE ${LIBS})

#-------------------------------------------------------------------------------
#	EXECUTABLES
#-------------------------------------------------------------------------------

add_executable(Cubos
  core/main.cpp
  ${RESOURCE_FILE}
)
include_directories(${OPENGL_INCLUDE_DIRS})
target_link_libraries(Cubos PRIVATE ${LIBS} mainwindow)
