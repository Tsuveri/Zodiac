#pragma once

#include "Core.h"

namespace Zodiac {
	
	class ZODIAC_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}
