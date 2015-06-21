cmake_minimum_required(VERSION 2.8)

project(mandelizer)

find_package(GMP REQUIRED)
find_package(wxWidgets REQUIRED)

include(${wxWidgets_USE_FILE})

include_directories( ${GMP_INCLUDE_DIR} )
include_directories( ${wxWidgets_INCLUDE_DIRS} )
link_directories( ${wxWidgets_LIBRARIES} )

add_executable(mandelizer mainwindow.cpp mainpanel.cpp mandelizer.cpp gridset.cpp colormapping.cpp color.cpp display.cpp grid.cpp screenpoint.cpp transformation.cpp point.cpp mandelbrot_calculator.cpp)

target_link_libraries(mandelizer ${GMP_LIBRARIES} ${wxWidgets_LIBRARIES})

install(TARGETS mandelizer RUNTIME DESTINATION bin)
