#include <iostream>
#include <vector>
#include "AbstractFactory.h"
#include "BridgePattern.h"
#include "GraphicProxy.h"
int main()
{
	Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;
	for (int i = 0; i < 5 ;i++)
	{
			characters.push_back(factory->createPlayer());
	}

	characters.push_back(factory->createOpponents());

	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}


	DrawAPI* api = new DrawImpl();
	CharacterBP* characterbp = new PlayerBP(api);
	characterbp->draw();
	std::cin.get();

	GraphicProxy gp;
	gp.draw();
	return 1;
}

