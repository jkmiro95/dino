//
//  Dino.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "Dino.hpp"
#include "TextureManager.hpp"
#include <ctime>


float jump_speed = 0.0;

Dino::Dino() {
    textureManager = new TextureManager();
    dino_duck = false;
};

void Dino::process(float delta) {
    //sf::Sprite::move(0, jump_speed*delta);
    move(sf::Vector2f(0, jump_speed*delta));
    if (getPosition().y <= 350 && getPosition().y < 450) {
        jump_speed = 300.0;
    }
    else if (getPosition().y >= 450) {
        jump_speed = 0.0;
    }
    //std::cout << sf::Sprite::getPosition().y;
    //std::cout << getPosition().y;
}

void Dino::jump() {
    if (jump_speed == 0.0) {
        jump_speed = -300.0;
    }
}

void Dino::duck() {
    dino_duck = true;
}
