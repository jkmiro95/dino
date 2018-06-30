//
//  GameScene.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef GameScene_hpp
#define GameScene_hpp

#include "GameObject.hpp"
#include "GameObject2D.hpp"
#include "BackgroundManager.hpp"
#include "Dino.hpp"
#include "DinoManager.hpp"
#include "InputHandler.hpp"
#include "Obstacle.hpp"
#include "ObstacleManager.hpp"
#include <SFML/Graphics.hpp>


class GameScene : public GameObject {
public:
    GameScene(sf::RenderWindow* window);
    void process(float delta);
private:
    sf::RenderWindow* window;
    void setupBackground();
    void setupDino();
    void setupInput();
    void setupObstacle();
    void setupScore();
    void updateScore();
    void displayText();

    BackgroundManager* backgroundManager;
    Dino* dino;
    InputHandler* input;
    ObstacleManager* obstacleManager;
    DinoManager* dinoManager;
    
    sf::Text text;
    sf::Text gameOver;
    sf::Font font;
    sf::Clock scoreTimer;
    int score;
};

#endif /* GameScene_hpp */

