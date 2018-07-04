//
//  BackgroundManager.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "BackgroundManager.hpp"
#include "Background.hpp"
#include <list>
#include <iostream>
#include "ResourcePath.hpp"
#include "TextureManager.hpp"

BackgroundManager::BackgroundManager()
{
    textureManager = new TextureManager();
    background1 = new Background();
    background2 = new Background();
    backgroundTexture = textureManager->background;
    buildBackgrounds();
    backgroundWidth = background1->getLocalBounds().width;
    background2->setPosition(sf::Vector2f(backgroundWidth, 0.0));
}

void BackgroundManager::process(float delta)
{
    
    if (background1->getPosition().x >= c.screenWidth) {
        background1->setPosition(sf::Vector2f(background2->getPosition().x - backgroundWidth, 0));
    }
    if (background2->getPosition().x >= c.screenWidth) {
        background2->setPosition(sf::Vector2f(background1->getPosition().x - backgroundWidth, 0));
    }
    
    if (timer.getElapsedTime().asSeconds() > c.backgroundAccelerationTime) {
        background1->setSpeed(background1->speed*c.backgroundAccelerationMultiplier);
        background2->setSpeed(background2->speed*c.backgroundAccelerationMultiplier);
    }
    
    background1->process(delta);
    background2->process(delta);
}

std::vector<Background*> BackgroundManager::getBackgrounds()
{
    std::vector<Background*> backgrounds;
    backgrounds.push_back(background1);
    backgrounds.push_back(background2);
    return backgrounds;
}

void BackgroundManager::buildBackgrounds()
{
    background1->setTexture(backgroundTexture);
    background1->setSpeed(c.backgroundSpeed);
    background2->setTexture(backgroundTexture);
    background2->setSpeed(c.backgroundSpeed);
}

void BackgroundManager::stopBackgroundMovement() {
    background1->setSpeed(0);
    background2->setSpeed(0);
}

BackgroundManager::~BackgroundManager() {
    delete(textureManager);
    delete(background1);
    delete(background2);
}
