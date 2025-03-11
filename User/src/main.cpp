#include <Sonic.h>


class User : public Sonic::Application
{
public:

};


int main()
{
	Sonic::LogManager::startUp();

	SONIC_INFO("Info from Sonic engine");
	USER_INFO("Info from User of Sonic Engine");

	SONIC_CRIT("Info from Sonic engine");
	USER_DEBUG("Info from User of Sonic Engine");

	User* user = new User();
	user->run();
	delete user;

	Sonic::LogManager::destroy();


	return 0;
}