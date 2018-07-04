//
//  GameScene.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//
#include "GameScene.hpp"
#include "Background.hpp"
#include "BackgroundManager.hpp"
#include "Dino.hpp"
#include "DinoManager.hpp"
#include "ResourcePath.hpp"
#include "Obstacle.hpp"
#include "ObstacleManager.hpp"

std::list<GameObject2D*> gameObjects2D;
std::list<GameObject*> gameObjects;

GameScene::GameScene(sf::RenderWindow * window)
{
    this->window = window;
    setupBackground();
    setupDino();
    setupInput();
    setupObstacle();
    setupScore();
}

void GameScene::process(float delta)
{
    for (auto const& i : gameObjects) {
        i->process(delta);
    }
    
    for (auto const& i : gameObjects2D) {
        i->process(delta);
        window->draw(*i);
    }
    updateScore();
    window->draw(text);
    
    if(obstacleManager->checkCollision(dino) == true) {
        backgroundManager->stopBackgroundMovement();
        obstacleManager->stopObstaclesMovement();
        dinoManager->collision = true;
        displayText();
    }
};

void GameScene::setupBackground() {
    backgroundManager = new BackgroundManager();
    gameObjects.push_back(backgroundManager);
    gameObjects2D.push_back(backgroundManager->getBackgrounds()[0]);
    gameObjects2D.push_back(backgroundManager->getBackgrounds()[1]);
};

void GameScene::setupDino() {
    dinoManager = new DinoManager();
    gameObjects.push_back(dinoManager);
    dino = dinoManager->getDino();
    gameObjects2D.push_back(dino);
};

void GameScene::setupInput() {
    input = new InputHandler(dino);
    gameObjects.push_back(input);
}

void GameScene::setupObstacle() {
    obstacleManager = new ObstacleManager(&gameObjects2D);
    gameObjects.push_back(obstacleManager);
}

void GameScene::setupScore() {
    font.loadFromFile(resourcePath() + "sansation.ttf");
    text.setFont(font);
    text.setCharacterSize(c.textSize);
    text.setFillColor(sf::Color::Black);
    score = 0;
    text.setString(std::to_string(score));
}

void GameScene::updateScore() {
    if (scoreTimer.getElapsedTime().asSeconds() > 1.0f && obstacleManager->checkCollision(dino) == false) {
        score += 1;
        text.setString(std::to_string(score));
        scoreTimer.restart();
    }
}

void GameScene::displayText() {
    gameOver.setFont(font);
    gameOver.setCharacterSize(c.textSize);
    gameOver.setFillColor(sf::Color::Black);
    gameOver.setPosition(c.gameOverWidth,c.gameOverHeight);
    gameOver.setString("Game over");
    window->draw(gameOver);
}

GameScene::~GameScene() {
    delete(backgroundManager);
    delete(obstacleManager);
    delete(dinoManager);
    delete(input);
}
