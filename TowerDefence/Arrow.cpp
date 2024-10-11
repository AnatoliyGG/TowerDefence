#include "Arrow.h"
#include "VectorMath.h"
#include "Manager.h"

Arrow::Arrow(sf::Vector2f position, float damage, sf::Vector2f direction, 
	float velocity, GameObject* target) :
	Projectile(position, 8.f, LoadTexture("TowerDefecne\\images\\Projectile\\arrow_1.png", { 0, 0, 32, 32 }),
		damage, direction, velocity), target(target)
{

}

Arrow::~Arrow()
{
}

void Arrow::Update(float dt)
{

	target_position = target->Position();
	Move(dt);

	if (getLength(target_position - position) < 2)
	{
		MSG* m = new MSG;
		m->type = MsgType::Death;
		m->death.who_to_die = this;
		m->death.killer = this;

		Manager::GetInstance()->SendMsg(m);
	}
}

void Arrow::SendMsg(MSG* m)
{
}