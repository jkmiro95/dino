//
//  InputHandler.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "InputHandler.hpp"
#include <SFML/Graphics.hpp>

InputHandler::InputHandler(Dino* dino) {
    this->dino = dino;
}

void InputHandler::process(float delta) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        dino->jump();
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)) {
        dino->duck();
    }
}

InputHandler::~InputHandler() {}
