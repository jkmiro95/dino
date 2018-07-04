//
//  GameObject2D.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "GameObject2D.hpp"
#include <iostream>
#include "ResourcePath.hpp"

GameObject2D::GameObject2D() {}

void GameObject2D::loadTexture(std::string path)
{
    if (!texture.loadFromFile(path))
    {
        std::cout << "Error loading image";
    }
    
    this->setTexture(texture);
    
}

GameObject2D::~GameObject2D() {}
