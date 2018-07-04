//
//  Dino.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef Dino_hpp
#define Dino_hpp
#include <iostream>
#include "GameObject2D.hpp"
#include "TextureManager.hpp"
#include "ConstAndVars.hpp"
#include <ctime>

class Dino : public GameObject2D{
public:
    Dino();
    ~Dino();
    void process(float delta);
    void jump();
    void duck();
    bool dino_duck;
    float jump_speed;
private:
    TextureManager* textureManager;
    ConstAndVars c;
    sf::Texture duckTexture;
    //sf::Clock clock;
    clock_t sec;
    clock_t start_time;
    clock_t end_time;
};

#endif /* Dino_hpp */
