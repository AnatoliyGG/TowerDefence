#include "Tower.h"

using namespace sf;

Tower::Tower(sf::Vector2f position, float size_radius, sf::Texture* texture,
    int level, int cost, float cooldown, float action_range) :
    GameObject(position, size_radius, texture), level(level), cost(cost),
    cooldown(cooldown), cooldown_current(0), action_range(action_range)
{
}

Tower::~Tower()
{
}

void Tower::Action()
{
}
