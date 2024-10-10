#pragma once
#include "GameObject.h"

class Projectile :	public GameObject
{
protected:
	float damage;
	sf::Vector2f direction;
	float velocity;
	sf::Vector2f target_position;

public:
	Projectile(sf::Vector2f position, float size_radius, sf::Texture* texture,
		float damage, sf::Vector2f direction, float velocity,	sf::Vector2f target_position);
	virtual ~Projectile(); 

	virtual void Move(float dt);
};

