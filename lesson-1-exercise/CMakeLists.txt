cmake_minimum_required(VERSION 3.16)

project(lesson-1-exercise LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(lesson-1-exercise
  main.cpp
  exercise.h exercise.cpp
  exercisewriter.h exercisewriter.cpp
  exercisereader.h exercisereader.cpp
)
target_link_libraries(lesson-1-exercise Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS lesson-1-exercise
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
