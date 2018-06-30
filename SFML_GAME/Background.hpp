//
//  Background.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef Background_hpp
#define Background_hpp
#include <iostream>
#include "GameObject2D.hpp"

class Background : public GameObject2D {
public:
    Background();
    void process(float delta);
    void setSpeed(int speed);
private:
    int speed;
};

#endif /* Background_hpp */
