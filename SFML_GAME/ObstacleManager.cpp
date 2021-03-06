//
//  ObstacleManager.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 30.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "ObstacleManager.hpp"
#include "ResourcePath.hpp"
#include "GameObject2D.hpp"
#include "Dino.hpp"
#include "BackgroundManager.hpp"
#include "TextureManager.hpp"
#include <iostream>

ObstacleManager::ObstacleManager(std::list<GameObject2D*>* gameObjects2D) {
    this->gameObjects2D = gameObjects2D;
    textureManager = new TextureManager();
    texture1 = textureManager->texture;
    loadCactis();
    loadPteros();
    backgroundManager = new BackgroundManager();
    collision = false;
    change = false;
}

void ObstacleManager::process(float delta) {
    float randomTime = (c.maxObstacleGenerate - c.minObstacleGenerate) * ((float)rand() / RAND_MAX) + c.minObstacleGenerate;
    if (timer.getElapsedTime().asSeconds() > randomTime) {
        obstacle = new Obstacle();
        obstacle->setTexture(texture1);
        CactiOrPtero = std::rand() % 10;
        if (CactiOrPtero < 7) {
            randomTexture = std::rand() % (cactisList.size());
            obstacle->setTextureRect(cactisList[randomTexture]);
            if (randomTexture == 3) {
                obstacle->setPosition(c.widthObstacleGenerate, c.heightCactiGenerate);
            } else {
                obstacle->setPosition(c.widthObstacleGenerate, c.heightObstacleGenerate);
            }
        } else {
            if (clock.getElapsedTime().asSeconds() > c.animationChangeTime) {
                if (!change) {
                    obstacle->setTextureRect(pterosList[0]);
                    change = true;
                    //std::cout << dino1.getPosition().y;
                } else {
                    obstacle->setTextureRect(pterosList[1]);
                    change = false;
                }
                clock.restart();
            }
            obstacle->setPosition(c.widthObstacleGenerate, c.heightPteroGenerate);
        }
        obstacle->changeSpeed(c.obstacleSpeed);
        gameObjects2D->push_back(obstacle);
        obstacles.push_back(obstacle);
        timer.restart();
        removeObstacles();
    }
    
};

void ObstacleManager::loadCactis() {
    sf::IntRect rect1(157,69,15,33);
    cactisList.push_back(rect1);
    sf::IntRect rect2(174,69,15,33);
    cactisList.push_back(rect2);
    sf::IntRect rect3(191,69,15,33);
    cactisList.push_back(rect3);
    sf::IntRect rect4(332,2,49,50);
    cactisList.push_back(rect4);
    sf::IntRect rect5(161,116,15,33);
    cactisList.push_back(rect5);
    sf::IntRect rect6(178,69,15,33);
    cactisList.push_back(rect6);
    sf::IntRect rect7(227,117,15,33);
    cactisList.push_back(rect7);
}

void ObstacleManager::loadPteros() {
    sf::IntRect rect8(156,162,42,30);
    pterosList.push_back(rect8);
    sf::IntRect rect9(210,160,42,22);
    pterosList.push_back(rect9);
}

bool ObstacleManager::checkCollision(Dino* dino) {
    for (auto const& obstacle1 : obstacles) {
        if(dino->getGlobalBounds().intersects(obstacle1->getGlobalBounds())) {
            collision = true;
        }
    }
    return collision;
}

void ObstacleManager::stopObstaclesMovement() {
    for (auto const& obstacle2 : obstacles) {
        obstacle2->changeSpeed(0);
    }
}

void ObstacleManager::removeObstacles() {
    temp_obstacles = obstacles;
    for (auto const& obstacle3: temp_obstacles) {
        if(obstacle3->getPosition().x < 0) {
            obstacles.remove(obstacle3);
            gameObjects2D->remove(obstacle3);
            delete(obstacle3);
        }
    }
}

ObstacleManager::~ObstacleManager() {
    delete(textureManager);
    delete(backgroundManager);
    delete(obstacle);
}
