#pragma once


#ifdef ZDC_PLATFORM_WINDOWS
	
extern Zodiac::Application* Zodiac::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Zodiac::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Zodiac only supports Windows!
#endif
