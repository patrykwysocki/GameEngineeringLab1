#include <iostream>
#include <vector>
// This is the base character class and is abstract.
// The draw method is a pure virtual and will
//be overridden in the inherited classes.
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
	std::cout << "delete character" << std::endl;
}

// The child of Character class, the player.
// will override to do player stuff
class Player : public Character
{
public:
	void draw()
	{
		std::cout << "draw player" << std::endl;
	}
};
// Child of the Character class the boss
// will override the draw to do boss stuff
class Boss : public Character
{
public:
	void draw()
	{
		std::cout << "Draw boss" << std::endl;
	}
};

// The abstract factory class
// holds virtual functions of the concrete factories
// This is the interface to be used when creating objects
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
