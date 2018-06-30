//
//  GameObject.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 28.05.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef GameObject_hpp
#define GameObject_hpp
#include <SFML/Graphics.hpp>

class GameObject {
public:
    virtual void process(float delta) = 0;
};

#endif /* GameObject_hpp */
