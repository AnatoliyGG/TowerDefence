#include "ArrowTower.h"

using namespace sf;

ArrowTower::ArrowTower(sf::Vector2f position, int level):
	Tower(position, 50, LoadTexture("images\\TowerOne.png", {0, 0, 200, 200}), level, 100 * level, 1.0f, 200.f)
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
