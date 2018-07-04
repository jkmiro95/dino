//
//  DinoManager.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 29.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef DinoManager_hpp
#define DinoManager_hpp
#include "GameObject.hpp"
#include "Dino.hpp"
#include "TextureManager.hpp"
#include "ConstAndVars.hpp"
//#include <list>

class DinoManager : public GameObject {
public:
    DinoManager();
    ~DinoManager();
    void process(float delta);
    Dino* getDino();
    bool collision;
    
private:
    Dino dino1;
    TextureManager* textureManager;
    ConstAndVars c;
    void loadAnimations();
    sf::Texture textureDino;
    sf::Texture textureDino2;
    sf::Texture textureDino3;
    sf::Texture textureDino4;
    sf::Clock clock;
    bool change;
    std::vector<sf::IntRect> rectList;
    /*int speed;
    int backgroundWidth;*/
};

#endif /* DinoManager_hpp */
