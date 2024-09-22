#pragma once
#include "GameObject.h"

class Projectile :	public GameObject
{
protected:
	float damage;
	MyVector2 direction;
	float velocity;
	MyVector2 target_position;

public:
	Projectile();
	Projectile(const Projectile&);
	virtual ~Projectile();

	virtual void Move(float dt);
};

