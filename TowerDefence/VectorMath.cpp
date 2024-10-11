#include "VectorMath.h"

sf::Vector2f normalize(sf::Vector2f vec)
{
	float len = sqrt(vec.x * vec.x + vec.y * vec.y);
	vec.x /= len;
	vec.y /= len;

	return sf::Vector2f();
}

float getLength(sf::Vector2f vec)
{
	return sqrt(vec.x * vec.x + vec.y * vec.y);
}

sf::Vector2f operator-(sf::Vector2f a, sf::Vector2f b)
{
	return { a.x - b.x, a.y - b.y };
}

sf::Vector2f changeLength(sf::Vector2f vec, float new_len)
{
	float len = sqrt(vec.x * vec.x + vec.y * vec.y);
	len = (len == 0) ? 1.f : len;
	vec.x *= new_len / len;
	vec.y *= new_len / len;

	return vec;
}
