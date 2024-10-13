#include "Arrow.h"
#include "VectorMath.h"
#include "Manager.h"

Arrow::Arrow(sf::Vector2f position, float damage,
	float velocity, GameObject* target) :
	Projectile(position, 8.f, LoadTexture("TowerDefence\\images\\Projectile\\arrow1.png", { 0, 0, 32, 32 }),
		damage, {0.f, 0.f}, velocity), target(target)
{

}

Arrow::~Arrow()
{
}

void Arrow::Update(float dt)
{

	target_position = target->Position();
	Move(dt);

	if (getLength(target_position - position) < velocity*dt)
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