//
//  Background.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "Background.hpp"

Background::Background() {};

void Background::process(float delta)
{
    move(sf::Vector2f(speed * delta, 0));
}

void Background::setSpeed(int speed) {
    this->speed = speed;
}

Background::~Background() {}
