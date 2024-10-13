#pragma once
#include "Tower.h"

class ArrowTower : public Tower
{
public:
	GameObject* target_locked = nullptr;

public:
	ArrowTower(sf::Vector2f position, int level);
	~ArrowTower();

	void Update(float dt);
	void SendMsg(MSG* m);
	void Action();
};

