cmake_minimum_required(VERSION 3.5)

project(viikko1tehtavat LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(viikko1tehtavat main.cpp
    tehtava2.cpp
    tehtava3.cpp)

include(GNUInstallDirs)
install(TARGETS viikko1tehtavat
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
