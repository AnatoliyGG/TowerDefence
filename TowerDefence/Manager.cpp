#include "Manager.h"

Manager* Manager::instance = nullptr;

Manager::Manager() : objs(), msgs()
{

}

Manager::~Manager()
{

}

Manager::Manager(const Manager&)
{
	for (auto x : objs)
	{
		delete x;
	}
	objs.clear();

	for (auto x : msgs)
	{
		delete x;
	}
	msgs.clear();
}

Manager* Manager::GetInstance()
{
	if (!instance) instance = new Manager();
	return instance;
}

void Manager::Destroy()
{
	if (instance) delete instance;
}

void Manager::Update(float dt)
{
	for (auto obj : objs)
	{
		obj->Update(dt);
	}

	for (auto m : msgs)
	{
		switch (m.type)
		{
			;
		}

		for (auto obj : objs)
		{
			obj->SendMsg(m);
		}
	}
}

void Manager::SendMsg(MSG* m)
{
	msgs.push_back(m);
}
