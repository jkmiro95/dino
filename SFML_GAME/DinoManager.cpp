//
//  DinoManager.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 29.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "DinoManager.hpp"
#include "Dino.hpp"
#include <list>
#include <iostream>
#include "ResourcePath.hpp"
#include "TextureManager.hpp"

bool change = false;

DinoManager::DinoManager() {
    textureManager = new TextureManager();
    loadAnimations();
    dino1.setTexture(textureDino);
    dino1.setTextureRect(rectList[0]);
    dino1.setPosition(c.widthDinoGenerate, c.heightDinoGenerate);
    collision = false;
}

void DinoManager::process(float delta) {
    if (collision == false && dino1.dino_duck == false) {
        if (dino1.jump_speed == 0.0) {
            dino1.setPosition(c.widthDinoGenerate, c.heightDinoGenerate);
        }
        if (clock.getElapsedTime().asSeconds() > c.animationChangeTime) {
            if (!change) {
                dino1.setTextureRect(rectList[0]);
                change = true;
                //std::cout << dino1.getPosition().y;
            } else {
                dino1.setTextureRect(rectList[1]);
                change = false;
            }
            clock.restart();
        }
    } else if (collision == false && dino1.dino_duck == true) {
        dino1.setTextureRect(rectList[3]);
        dino1.setPosition(c.widthDinoGenerate, c.heightDinoDuckGenerate);
        if (clock.getElapsedTime().asSeconds() > c.dinoStandUpTime) {
            dino1.dino_duck = false;
            clock.restart();
        }
    }
    else {
        dino1.setPosition(c.widthDinoGenerate, c.heightDinoGenerate);
        dino1.setTextureRect(rectList[2]);
    }
};

Dino* DinoManager::getDino() {
    return &dino1;
}

void DinoManager::loadAnimations() {
    sf::IntRect rectDino(6, 123, 40, 43);
    rectList.push_back(rectDino);
    sf::IntRect rectDino2(55, 123, 40, 43);
    rectList.push_back(rectDino2);
    sf::IntRect rectDino3(69, 48, 40, 43);
    rectList.push_back(rectDino3);
    sf::IntRect rectDino4(7, 200, 55, 26);
    rectList.push_back(rectDino4);
    /*textureDino.loadFromFile(resourcePath() + "dino_sprite.png", rectDino);
    textureDino2.loadFromFile(resourcePath() + "dino_sprite.png", rectDino2);
    textureDino3.loadFromFile(resourcePath() + "dino_sprite.png", rectDino3);
    textureDino4.loadFromFile(resourcePath() + "dino_sprite.png", rectDino4);*/
    textureDino = textureManager->texture;
}

DinoManager::~DinoManager() {
    delete(textureManager);
}
