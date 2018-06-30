//
//  Obstacle.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef Obstacle_hpp
#define Obstacle_hpp
#include <iostream>
#include "GameObject2D.hpp"

class Obstacle : public GameObject2D{
public:
    Obstacle();
    void process(float delta);
    void changeSpeed(float speed);
private:
    float obstacle_speed;
};

#endif /* Obstacle_hpp */
