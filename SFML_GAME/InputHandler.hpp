//
//  InputHandler.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef InputHandler_hpp
#define InputHandler_hpp
#pragma once
#include "Dino.hpp"
#include "GameObject.hpp"

class InputHandler : public GameObject2D{
public:
    InputHandler(Dino * dino);
    ~InputHandler();
    void process(float delta);
private:
    Dino * dino;
};
#endif /* InputHandler_hpp */
