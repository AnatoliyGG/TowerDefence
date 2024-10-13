#pragma once
#include "Projectile.h"
#include "Enemy.h"

class Arrow : public Projectile
{
protected:
	GameObject* target;

public:
	Arrow(sf::Vector2f position, float damage,
		float velocity, GameObject* target);
	~Arrow();

	void Update(float dt);
	void SendMsg(MSG* m);
};