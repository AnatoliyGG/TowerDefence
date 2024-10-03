#pragma once
#include <SFML/Graphics.hpp>

struct MyVector2
{
	float x, y;
};

struct MSG;

class GameObject
{
private:
	static int lastID;

protected:
	int id;
	sf::Vector2f position;
	float size_radius;
	sf::Sprite sprite;

	static sf::Texture* LoadTexture(const char* filename, const sf::IntRect& src_box);

public:
	static int GetNewID();
	static int GetLastID();

	GameObject(sf::Vector2f position, float size_radius, sf::Texture* texture);
	GameObject(const GameObject&);
	virtual ~GameObject();
	
	void Position(sf::Vector2f new_pos);
	sf::Vector2f Position();
	int ID();

	virtual void Update(float dt) = 0;
	virtual void SendMsg(MSG* m) = 0;
	void Draw(sf::RenderWindow& win);
};