#pragma once
#include "GameObject.h"

class Enemy :
    public GameObject
{
protected:
    int damage_to_player;
    float maxhp, hp;
    Vector2 direction;
    float velocity;
    int loot;

public:
    Enemy();
    Enemy(const Enemy&);

    virtual void Move(float dt);
};

