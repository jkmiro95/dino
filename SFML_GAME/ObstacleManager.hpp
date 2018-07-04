//
//  ObstacleManager.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 30.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef ObstacleManager_hpp
#define ObstacleManager_hpp

#include "GameObject.hpp"
#include "Obstacle.hpp"
#include "Dino.hpp"
#include "BackgroundManager.hpp"
#include "TextureManager.hpp"
#include <list>
#include "ConstAndVars.hpp"
//#include <iostream>

class ObstacleManager : public GameObject {
public:
    ObstacleManager(std::list<GameObject2D*>* gameObjects2D);
    ~ObstacleManager();
    void process(float delta);
    std::list<Obstacle*> obstacles;
    bool checkCollision(Dino* dino);
    void stopObstaclesMovement();
    bool collision;
private:
    Obstacle* obstacle;
    BackgroundManager* backgroundManager;
    TextureManager* textureManager;
    std::list<GameObject2D*>* gameObjects2D;
    ConstAndVars c;
    void loadCactis();
    void loadPteros();
    sf::Clock timer;
    sf::Texture texture1;
    std::vector<sf::IntRect> cactisList;
    std::vector<sf::IntRect> pterosList;
    void removeObstacles();
    std::list<Obstacle*> temp_obstacles;
    int randomTexture;
    int CactiOrPtero;
    sf::Clock clock;
    bool change;
};

#endif /* ObstacleManager_hpp */
