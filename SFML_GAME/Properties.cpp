//
//  Properties.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 07.06.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "Properties.hpp"

Properties::Properties() {
    obstacle_speed = -100.0;
};

float Properties::getObstacleSpeed() {
    return obstacle_speed;
}

void Properties::changeObstacleSpeed(float speed) {
    obstacle_speed = speed;
}
