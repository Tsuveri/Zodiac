#include <Zodiac.h>

class Sandbox : public Zodiac::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};


Zodiac::Application* Zodiac::CreateApplication()
{
	return new Sandbox();
}