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
	msg->create.new_object = new ArrowTower({ 100, 100 }, 1);
	MGR->SendMsg(msg);

	while (win.isOpen())
	{
		sf::Event event;
		while (win.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) win.close();
		}
		MGR->Update(0.001);

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