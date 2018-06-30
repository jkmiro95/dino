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

void GameObject2D::loadTexture(std::string path)
{
    if (!texture.loadFromFile(path))
    {
        std::cout << "Error loading image";
    }
    
    this->setTexture(texture);
    
}

/*void GameObject2D::loadAnimation(std::string path, int offsetx, int offsety, int sizex, int sizey) {
    sf::IntRect rectSourceSprite(offsetx, offsety, sizex, sizey);
    if (!texture2.loadFromFile(path, rectSourceSprite)) {
        std::cout << "Error loading image";
    }
    this->setTexture(texture2);
}

int GameObject2D::getRealWidth() {
    return sf::Sprite::getLocalBounds().width * sf::Sprite::getScale().x;
}
int GameObject2D::getRealHeight() {
    return sf::Sprite::getLocalBounds().height * sf::Sprite::getScale().y;
}*/
