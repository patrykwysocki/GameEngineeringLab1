#include <iostream>
#include <vector>
class Character
{
public:
	Character();
	virtual ~Character();
	virtual void draw() = 0;
};

Character::Character()
{
}

Character::~Character()
{

}
class Player : public Character
{
public:
	void draw()
	{
		std::cout << "draw player" << std::endl;
	}
};
class Boss : public Character
{
public:
	void draw()
	{
		std::cout << "Draw boss" << std::endl;
	}
};
class Factory
{
public:
	virtual Character* createPlayer() = 0;
	virtual Character* createOpponents() = 0;
};
class CharacterFactory : public Factory
{
public:
	Character* createOpponents()
	{
		return new Boss;
	}
	Character* createPlayer()
	{
		return new Player;
	}
};
