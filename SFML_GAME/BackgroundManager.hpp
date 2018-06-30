//
//  BackgroundManager.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef BackgroundManager_hpp
#define BackgroundManager_hpp
#include "GameObject.hpp"
#include "Background.hpp"
#include "TextureManager.hpp"
#include <list>

class BackgroundManager : public GameObject {
public:
    BackgroundManager();
    void process(float delta);
    std::vector<Background*> getBackgrounds();
    void stopBackgroundMovement();
    
private:
    Background* background1;
    Background* background2;
    TextureManager* textureManager;
    sf::Texture backgroundTexture;
    void buildBackgrounds();
    int speed;
    int backgroundWidth;
};

#endif /* BackgroundManager_hpp */
