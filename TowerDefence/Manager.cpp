#include "Manager.h"

Manager::Manager()
{
}

Manager::~Manager()
{
}

Manager::	(const Manager&)
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
