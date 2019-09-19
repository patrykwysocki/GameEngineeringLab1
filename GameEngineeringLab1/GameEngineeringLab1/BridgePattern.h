#include <iostream>
class CharacterBP
{
public:
	CharacterBP() {}
	~CharacterBP();
	void draw()
	{
		std::cout << "Printing Character" << std::endl;
	}

private:

};
CharacterBP::~CharacterBP()
{
}

class HandleToCharacter
{
public:
	HandleToCharacter() : character(new CharacterBP()) {}
	~HandleToCharacter();
	CharacterBP* operator->() { return character; }

private:
	CharacterBP* character;
};

HandleToCharacter::~HandleToCharacter()
{
}

class DrawAPI
{
public:
	DrawAPI();
	~DrawAPI();
	virtual void draw() = 0;

private:

};

DrawAPI::DrawAPI()
{
}

DrawAPI::~DrawAPI()
{
}
class DrawImpl : public DrawAPI
{
public:
	DrawImpl();
	~DrawImpl();
	void draw()
	{
		std::cout << "Draw Impl" << std::endl;
	}

private:

};

DrawImpl::DrawImpl()
{
}

DrawImpl::~DrawImpl()
{
}

class PlayerBP : public CharacterBP
{
public:
	PlayerBP(DrawAPI* api)
	{
		this->api = api;
	}
private:
	DrawAPI* api;
};
