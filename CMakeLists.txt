cmake_minimum_required(VERSION 3.2)

project(lain-bootleg-bootleg)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES
   src/main.c
   src/engine.c
   src/input.c
   src/menu.c
   src/scene.c
   src/shader.c
   src/sprite.c
   src/stb_image.c
   src/text.c
   src/texture.c
   src/window.c
   src/state.c
   src/kumashoot.c
   src/minigame.c
   src/vector2d.c
   src/random.c
   src/animations.c
   src/dressup.c
   src/theater.c
   src/cJSON.c
   src/resources.c
   src/sound.c
   src/movie.c
)

add_executable(${PROJECT_NAME} ${SOURCES})

if(MSVC)
   target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
   target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
endif()

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/src)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                       ${CMAKE_SOURCE_DIR}/res $<TARGET_FILE_DIR:${PROJECT_NAME}>/res)

option(SYSTEM_GLEW "Use system-installed GLEW instead of vendored one" OFF)

if(SYSTEM_GLEW)
   find_package(PkgConfig REQUIRED)
   find_package(OpenGL REQUIRED)
   pkg_check_modules(GLEW REQUIRED glew)
   target_include_directories(${PROJECT_NAME} PRIVATE ${GLEW_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIR})
   target_link_libraries(${PROJECT_NAME} PRIVATE ${GLEW_LDFLAGS} ${OPENGL_LIBRARIES})
else()
   add_definitions(-DGLEW_STATIC)
   add_subdirectory(${CMAKE_SOURCE_DIR}/external/glew-cmake EXCLUDE_FROM_ALL)
   target_link_libraries(${PROJECT_NAME} PRIVATE libglew_static)
endif()

option(SYSTEM_GLFW "Use system-installed GLFW instead of vendored one" OFF)

if(SYSTEM_GLFW)
   find_package(glfw3 REQUIRED)
   find_package(Threads REQUIRED)
   target_link_libraries(${PROJECT_NAME} PRIVATE glfw ${CMAKE_DL_LIBS} Threads::Threads m)
else()
   set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
   set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
   set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
   add_subdirectory(${CMAKE_SOURCE_DIR}/external/glfw EXCLUDE_FROM_ALL)
   target_link_libraries(${PROJECT_NAME} PRIVATE glfw)
endif()

if (UNIX)
   find_package(PkgConfig REQUIRED)
   pkg_check_modules(MPV REQUIRED mpv)
   target_include_directories(${PROJECT_NAME} PRIVATE ${MPV_INCLUDE_DIRS})
   target_link_libraries(${PROJECT_NAME} PRIVATE ${MPV_LDFLAGS})
endif (UNIX)

if (WIN32)
   set(MPV_DIR ${PROJECT_SOURCE_DIR}/external/mpv)
   if (MINGW)
      set(MPV_FLAGS "-mwindows -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,-Bdynamic,--no-whole-archive")
      set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${MPV_FLAGS}")
   endif (MINGW)
   set(MPV_INCLUDE_DIRS ${MPV_DIR}/include)
   set(MPV_LDFLAGS ${MPV_DIR}/mpv.lib)
   target_include_directories(${PROJECT_NAME} PRIVATE ${MPV_INCLUDE_DIRS})
   target_link_libraries(${PROJECT_NAME} PRIVATE ${MPV_LDFLAGS})
   add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
      ${MPV_DIR}/mpv-2.dll
        $<TARGET_FILE_DIR:${PROJECT_NAME}>)
endif (WIN32)

# Detect if mpv_detach_destroy or mpv_destroy
include(CheckSymbolExists)
set(CMAKE_REQUIRED_FLAGS ${MPV_FLAGS})
set(CMAKE_REQUIRED_INCLUDES ${MPV_INCLUDE_DIRS})
set(CMAKE_REQUIRED_LIBRARIES ${MPV_LDFLAGS})
check_symbol_exists(mpv_destroy "mpv/client.h" HAVE_MPV_DESTROY)

if(HAVE_MPV_DESTROY)
   target_compile_definitions(${PROJECT_NAME} PRIVATE HAVE_MPV_DESTROY)
endif()
