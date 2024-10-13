#include "Projectile.h"
#include "VectorMath.h"

using namespace sf;

Projectile::Projectile(sf::Vector2f position, float size_radius, sf::Texture* texture, 
	float damage, sf::Vector2f direction, float velocity) :
	GameObject(position, size_radius, texture), damage(damage), direction(direction), velocity(velocity)
{

}

Projectile::~Projectile()
{
}

void Projectile::Move(float dt)
{
	direction = changeLength(target_position - position, velocity);

	position.x += direction.x * dt;
	position.y += direction.y * dt;
}
