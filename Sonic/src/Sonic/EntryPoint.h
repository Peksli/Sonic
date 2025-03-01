#pragma once


#ifdef SONIC_PLATFORM_WINDOWS


extern Sonic::Application* Sonic::CreateApplication();


int main(int argc, char** argv)
{
	auto user_app = Sonic::CreateApplication();
	user_app->run();
	delete user_app;
}

#endif