//
//  Obstacle.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "Obstacle.hpp"

Obstacle::Obstacle() {};

void Obstacle::process(float delta) {
    move(sf::Vector2f(obstacle_speed * delta, 0));
}

void Obstacle::changeSpeed(float speed) {
    obstacle_speed = speed;
}

Obstacle::~Obstacle() {}
