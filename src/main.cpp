#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include "Rendering/Renderer.h"


int main() {
    Renderer myRenderer;

    try {
        myRenderer.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
