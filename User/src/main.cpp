#include <Sonic.h>


class User : public Sonic::Application
{
public:

};


int main()
{

	User* user = new User();
	user->run();
	delete user;


	return 0;
}