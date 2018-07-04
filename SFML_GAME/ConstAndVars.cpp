//
//  ConstAndVars.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 04.07.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "ConstAndVars.hpp"

ConstAndVars::ConstAndVars() {
    screenWidth = 800.0;
    screenHeight = 600.0;
    minObstacleGenerate = 0.8;
    maxObstacleGenerate = 2.0;
    widthObstacleGenerate = 810.0;
    widthDinoGenerate = 10.0;
    heightObstacleGenerate = 460.0;
    heightCactiGenerate = 450.0;
    heightPteroGenerate = 430.0;
    heightDinoGenerate = 450.0;
    heightDinoDuckGenerate = 470.0;
    animationChangeTime = 0.1;
    backgroundAccelerationTime = 10.0;
    backgroundAccelerationMultiplier = 1.2;
    obstacleSpeed = -200.0;
    dinoStandUpTime = 1.0;
    dinoMaxJumpHeight = 350.0;
    dinoJumpSpeed = 300.0;
    backgroundSpeed = 500.0;
    textSize = 100.0;
    gameOverWidth = 150;
    gameOverHeight = 100;
}



ConstAndVars::~ConstAndVars() {}
