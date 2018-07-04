//
//  ConstAndVars.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 04.07.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef ConstAndVars_hpp
#define ConstAndVars_hpp

class ConstAndVars {
public:
    ConstAndVars();
    ~ConstAndVars();
    float screenWidth;
    float screenHeight;
    float minObstacleGenerate;
    float maxObstacleGenerate;
    float widthObstacleGenerate;
    float widthDinoGenerate;
    float heightObstacleGenerate;
    float heightCactiGenerate;
    float heightPteroGenerate;
    float heightDinoGenerate;
    float heightDinoDuckGenerate;
    float animationChangeTime;
    float backgroundAccelerationTime;
    float backgroundAccelerationMultiplier;
    float obstacleSpeed;
    float dinoStandUpTime;
    float dinoMaxJumpHeight;
    float dinoJumpSpeed;
    float backgroundSpeed;
    float textSize;
    float gameOverWidth;
    float gameOverHeight;
};

#endif /* ConstAndVars_hpp */
