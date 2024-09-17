#pragma once
#include "MSG.h"

struct Vector2
{
	float x, y;
};

class GameObject
{
protected:
	int id;
	Vector2 position;
	int size_radius;
	// Texture image

public:
	static int GetNewID();

	GameObject();
	GameObject(const GameObject&);
	virtual ~GameObject();
	
	void Position(Vector2 new_pos);
	Vector2 Position();
	int ID();

	virtual void Update(float dt) = 0;
	virtual void SendMsg(MSG* m) = 0;
	void Draw();
};