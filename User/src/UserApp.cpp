#include <Sonic.h>


class User : public Sonic::Application
{
public:
	User()
	{
	}

	~User()
	{
	}

};


Sonic::Application* Sonic::CreateApplication()
{
	return new User;
}