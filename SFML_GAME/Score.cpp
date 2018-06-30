//
//  Score.cpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 14.06.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#include "Score.hpp"
#include "ResourcePath.hpp"

Score::Score() {
    score.setCharacterSize(32);
    scoreInt = 0;
    font.loadFromFile(resourcePath() + "sansation.ttf");
    score.setFont(font);
    score.setFillColor(sf::Color::Black);
    score.setPosition(100, 100);
}

void Score::process(float delta) {
    if (clock.getElapsedTime().asSeconds() > 1.0f) {
        scoreInt += 1;
        clock.restart();
    }
    score.setString(std::to_string(scoreInt));
};
