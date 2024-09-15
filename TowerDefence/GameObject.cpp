#include "GameObject.h"

int GameObject::GetNewID()
{
	return 0;
}

GameObject::GameObject()
{
}

GameObject::GameObject(const GameObject&)
{
}

GameObject::~GameObject()
{
}

void GameObject::Position(Vector2 new_pos)
{
}

Vector2 GameObject::Position()
{
	return Vector2();
}

int GameObject::ID()
{
	return 0;
}

void GameObject::Update(float dt)
{
}

void GameObject::SendMsg(MSG m)
{
}

void GameObject::Draw()
{
}
