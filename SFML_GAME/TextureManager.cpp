//
//  TextureManager.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 08.06.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "TextureManager.hpp"
#include "ResourcePath.hpp"

TextureManager::TextureManager() {
    texture.loadFromFile(resourcePath() + "dino_sprite.png");
    background.loadFromFile(resourcePath() + "background.jpg");
}

TextureManager::~TextureManager() {}
