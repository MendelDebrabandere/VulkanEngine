//
// Created by mende on 16/02/2025.
//

#include "Renderer.h"

void Renderer::run()
{
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}

void Renderer::initWindow()
{
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
}

void Renderer::initVulkan()
{
}

void Renderer::mainLoop()
{
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }
}

void Renderer::cleanup()
{
    glfwDestroyWindow(window);

    glfwTerminate();
}
