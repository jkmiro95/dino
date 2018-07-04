//
//  GameObject2D.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef GameObject2D_hpp
#define GameObject2D_hpp
#include <SFML/Graphics.hpp>
#include "GameObject.hpp"

class GameObject2D : public GameObject, public sf::Sprite {
public:
    GameObject2D();
    ~GameObject2D();
    void loadTexture(std::string path);
    //int getRealWidth();
    //int getRealHeight();
    //void loadAnimation(std::string path, int offsetx, int offsety, int sizex, int sizey);
private:
    sf::Texture texture;
    //sf::Texture texture2;
    //sf::IntRect rectSourceSprite(int offsetx, int offsety, int sizex, int sizey);
};

#endif /* GameObject2D_hpp */
