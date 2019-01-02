project(tutorial)

find_package(OpenCV)
add_executable(homework
	homework.cpp
)
target_link_libraries(homework
	${OpenCV_LIBS}
)
