#pragma once


#ifdef SONIC_PLATFORM_WINDOWS


extern Sonic::Application* Sonic::CreateApplication();


int main(int argc, char** argv)
{
	Sonic::LogManager::Initialize();

	SONIC_WARN("warn from Sonic");
	USER_WARN("warn from user");

	auto user_app = Sonic::CreateApplication();
	user_app->run();
	delete user_app;

	Sonic::LogManager::Shutdown();
}

#endif