cmake_minimum_required(VERSION 3.6)

project(foo)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/dist)

add_executable(${PROJECT_NAME} src/Foo.h src/Foo.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES
        LINK_FLAGS "-lembind \
                    -pthread \
                    -s INITIAL_MEMORY=16MB \
                    -s MAXIMUM_MEMORY=512MB \
                    -s ALLOW_MEMORY_GROWTH=1 \
                    -s ENVIRONMENT=web,worker")
