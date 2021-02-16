#-------------------------------------------------------------------------------
#	LIBRARIES
#-------------------------------------------------------------------------------

add_library(app
  app/app.cpp
  app/app.h
)
target_include_directories(app PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/app")
target_link_libraries(app PRIVATE ${BASE_LIBS})

add_library(filehandler
  filehandler/filehandler.cpp
  filehandler/filehandler.h
)
target_include_directories(filehandler PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/filehandler")
target_link_libraries(filehandler PRIVATE ${BASE_LIBS})

add_library(mainwindow
  mainwindow/mainwindow.cpp
  mainwindow/mainwindow.h
  mainwindow/mainwindow.ui
  mainwindow/viewport.cpp
  mainwindow/viewport.h
  ${RESOURCE_FILE}
)
target_include_directories(mainwindow PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/mainwindow")
target_link_libraries(mainwindow PRIVATE ${BASE_LIBS} filehandler)

set(CUBOS_LIBS app filehandler mainwindow)

#-------------------------------------------------------------------------------
#	EXECUTABLES
#-------------------------------------------------------------------------------

add_executable(Cubos
  core/main.cpp
  ${RESOURCE_FILE}
)
include_directories(${OPENGL_INCLUDE_DIRS})
target_link_libraries(Cubos PRIVATE ${BASE_LIBS} ${CUBOS_LIBS})
