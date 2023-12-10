//
// Created by destructive_crab on 12/8/23.
//

#include "BaseRenderer.h"

void BaseRenderer::Draw(IRendererComponent *drawable, sf::RenderWindow* window) {
    window->draw(*drawable->get_drawable());
}
