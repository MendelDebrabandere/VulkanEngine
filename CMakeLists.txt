cmake_minimum_required(VERSION 3.29)
project(VulkanEngine)

include(FetchContent)
FETCHCONTENT_DECLARE(GLFW GIT_REPOSITORY https://github.com/glfw/glfw GIT_TAG 3.4)
FETCHCONTENT_MAKEAVAILABLE(GLFW)

find_package(Vulkan REQUIRED)
if(Vulkan_FOUND)
    include_directories(${Vulkan_INCLUDE_DIRS})
    link_directories(${Vulkan_LIBRARY_DIRS})
endif()

set(CMAKE_CXX_STANDARD 26)

add_executable(VulkanEngine src/main.cpp
        src/Rendering/Renderer.cpp
        src/Rendering/Renderer.h)

target_link_libraries(VulkanEngine glfw ${Vulkan_LIBRARIES})