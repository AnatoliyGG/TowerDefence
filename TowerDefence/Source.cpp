#include "Manager.h"
#include "ArrowTower.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main()
{
	RenderWindow win(VideoMode(800, 600), "TowerDefence");

	Manager* MGR = Manager::GetInstance();

	MSG* msg = new MSG;
	msg->type = MsgType::Create;
	ArrowTower* a1 = new ArrowTower({ 100, 100 }, 1);
	msg->create.new_object = a1;
	MGR->SendMsg(msg);

	msg = new MSG;
	msg->type = MsgType::Create;
	ArrowTower* a2 = new ArrowTower({ 100, 400 }, 1);
	msg->create.new_object = a2;
	MGR->SendMsg(msg);

	msg = new MSG;
	msg->type = MsgType::Create;
	ArrowTower* a3 = new ArrowTower({ 400, 100 }, 1);
	msg->create.new_object = a3;
	MGR->SendMsg(msg);

	a1->target_locked = a2;
	a2->target_locked = a3;
	a3->target_locked = a1;

	Clock clock;
	clock.restart();

	while (win.isOpen())
	{
		sf::Event event;
		while (win.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) win.close();
		}
		MGR->Update(clock.restart().asSeconds());

		win.clear({255, 255, 255, 255});
		MGR->DrawObjects(win);
		win.display();
	}

	cout << "Creating manager" << endl;
	Manager* mgr = Manager::GetInstance();

	if (!mgr) cout << "Manager error" << endl;

	cout << "Destoying manager" << endl;
	Manager::Destroy();

	cout << "Successful finish" << endl;
	
	return 0;
}