#pragma once

struct MyVector2
{
	float x, y;
};

struct MSG;

class GameObject
{
protected:
	int id;
	MyVector2 position;
	int size_radius;
	// Texture image

public:
	static int GetNewID();

	GameObject();
	GameObject(const GameObject&);
	virtual ~GameObject();
	
	void Position(MyVector2 new_pos);
	MyVector2 Position();
	int ID();

	virtual void Update(float dt) = 0;
	virtual void SendMsg(MSG* m) = 0;
	void Draw();
};