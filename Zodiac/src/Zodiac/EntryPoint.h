#pragma once


#ifdef ZDC_PLATFORM_WINDOWS
	
extern Zodiac::Application* Zodiac::CreateApplication();

int main(int argc, char** argv)
{
	Zodiac::Log::Init();
	ZDC_CORE_WARN("Initialized Log!");
	int a = 5;
	ZDC_INFO("Hello! Var={0}", a);

	auto app = Zodiac::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Zodiac only supports Windows!
#endif
