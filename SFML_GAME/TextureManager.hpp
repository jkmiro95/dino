//
//  TextureManager.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 08.06.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef TextureManager_hpp
#define TextureManager_hpp
#include <SFML/Graphics.hpp>

class TextureManager {
public:
    TextureManager();
    sf::Texture texture;
    sf::Texture background;
};
#endif /* TextureManager_hpp */
