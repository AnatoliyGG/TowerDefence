#pragma once
#include "GameObject.h"

class Tower :   public GameObject
{
protected:
    int level;
    int cost;
    float coocldown;
    float cooldown_current;
    float action_range;

public:
    Tower();
    Tower(const Tower&);
    virtual ~Tower();
    virtual void Action() = 0;
};

