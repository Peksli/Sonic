#pragma once

#include "Core.h"


namespace Sonic {

	class SONIC_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	Application* CreateApplication();

};

