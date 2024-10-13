#pragma once
#include "GameObject.h"

class Tower :   public GameObject
{
protected:
    int level;
    int cost;
    float cooldown_time;
    float cooldown_current;
    float action_range;

public:
    Tower(sf::Vector2f position, float size_radius, sf::Texture* texture, 
            int level, int cost, float coocldown, float action_range);
    Tower(const Tower&);
    virtual ~Tower();
    virtual void Action() = 0;
};

