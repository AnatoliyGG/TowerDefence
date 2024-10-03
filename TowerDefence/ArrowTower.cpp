#include "ArrowTower.h"

using namespace sf;

ArrowTower::ArrowTower(sf::Vector2f position, int level):
	Tower(position, 50, LoadTexture("images\\TowerOne", {0, 0, 128, 128}), level, 100 * level, 1.0f, 200.f)
{
}

ArrowTower::ArrowTower(const ArrowTower&)
{
}

ArrowTower::~ArrowTower()
{
}

void ArrowTower::Update(float dt)
{
}

void ArrowTower::SendMsg(MSG* m)
{
}

void ArrowTower::Action()
{
}
