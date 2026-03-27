cmake_minimum_required(VERSION 3.16)

project(ep-4-qobject-and-moc LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

find_package(Qt6 REQUIRED COMPONENTS Core)

add_executable(ep-4-qobject-and-moc
  main.cpp
  test.h
  test.cpp
)
target_link_libraries(ep-4-qobject-and-moc PRIVATE Qt6::Core)

include(GNUInstallDirs)
install(TARGETS ep-4-qobject-and-moc
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
