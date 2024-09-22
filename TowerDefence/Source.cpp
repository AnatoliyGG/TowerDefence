#include "Manager.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main()
{
	RenderWindow win(VideoMode(800, 600), "TowerDefence");

	sleep(seconds(3));

	win.close();

	cout << "Creating manager" << endl;
	Manager* mgr = Manager::GetInstance();

	if (!mgr) cout << "Manager error" << endl;

	cout << "Destoying manager" << endl;
	Manager::Destroy();

	cout << "Successful finish" << endl;
	
	return 0;
}