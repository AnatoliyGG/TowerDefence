#pragma once
#include "Tower.h"

class ArrowTower : public Tower
{
public:
	ArrowTower(sf::Vector2f position, int level);
	ArrowTower(const ArrowTower&);
	~ArrowTower();

	void Update(float dt);
	void SendMsg(MSG* m);
	void Action();
};

