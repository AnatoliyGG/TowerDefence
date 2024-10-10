#include "Projectile.h"

using namespace sf;

Projectile::Projectile(sf::Vector2f position, float size_radius, sf::Texture* texture, 
	float damage, sf::Vector2f direction, float velocity, sf::Vector2f target_position) :
	GameObject(position, size_radius, texture), damage(damage), direction(direction), velocity(velocity)
{

}

Projectile::~Projectile()
{
}

void Projectile::Move(float dt)
{
	direction = target_position;


}
