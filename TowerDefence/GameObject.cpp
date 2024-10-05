#include "GameObject.h"

using namespace sf;

int GameObject::lastID = 0;

sf::Texture* GameObject::LoadTexture(const char* filename, const sf::IntRect& src_box)
{
	Texture* tex = new Texture();
	if (tex->loadFromFile(filename, src_box)) return tex;
	delete tex;

	return nullptr;
}

int GameObject::GetNewID()
{
	return ++lastID;
}

int GameObject::GetLastID()
{
	return lastID;
}

GameObject::GameObject(sf::Vector2f position, float size_radius, sf::Texture* texture):
	position(position), size_radius(size_radius), sprite(*texture)
{
	Vector2u tex_size = sprite.getTexture()->getSize();
	sprite.setOrigin(tex_size.x / 2.0f, tex_size.y / 2.0f);
}

GameObject::GameObject(const GameObject&)
{
}

GameObject::~GameObject()
{
}

void GameObject::Position(Vector2f new_pos)
{
	position = new_pos;
}

Vector2f GameObject::Position()
{
	return position;
}

int GameObject::ID()
{
	return id;
}

void GameObject::Update(float dt)
{
}

void GameObject::SendMsg(MSG* m)
{
}

void GameObject::Draw(::RenderWindow& win)
{
	sprite.setPosition(position);
	win.draw(sprite);
}
