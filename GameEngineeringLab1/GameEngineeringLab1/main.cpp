#include <iostream>
#include <vector>
#include "AbstractFactory.h"
#include "BridgePattern.h"
#include "GraphicProxy.h"
int main()
{
	Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;
	characters.push_back(factory->createPlayer());
	characters.push_back(factory->createOpponents());

	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
		delete characters.at(i);
	}


	DrawAPI* api = new DrawImpl();
	CharacterBP* characterbp = new PlayerBP(api);
	characterbp->draw();
	delete characterbp;
	//std::cin.get();

	GraphicProxy gp;
	gp.draw();
	return 1;
}

