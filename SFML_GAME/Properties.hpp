//
//  Properties.hpp
//  SFML_GAME
//
//  Created by Jakub Mirocha on 07.06.2018.
//  Copyright © 2018 Jakub Mirocha. All rights reserved.
//

#ifndef Properties_hpp
#define Properties_hpp

class Properties {
public:
    Properties();
    void changeObstacleSpeed(float speed);
    float getObstacleSpeed();
private:
    float obstacle_speed;
};
#endif /* Properties_hpp */
