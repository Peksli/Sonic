#include <Sonic.h>


class User : public Sonic::Application
{
public:
	User() = default;
	~User() = default;
};


Sonic::Application* Sonic::CreateApplication()
{
	return new User;
}