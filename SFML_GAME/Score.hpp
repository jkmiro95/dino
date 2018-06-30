//
//  Score.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 14.06.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef Score_hpp
#define Score_hpp

#include "GameObject2D.hpp"

class Score : public GameObject2D {
public:
    Score();
    void process(float delta);
    sf::Text score;
    sf::Font font;
    sf::Clock clock;
    int scoreInt;
};

#endif /* Score_hpp */
