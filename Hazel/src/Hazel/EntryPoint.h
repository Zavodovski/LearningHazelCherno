#pragma once

#ifdef HZ_PLATFORMS_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Welcome to Hazel Engine!\n");

	Hazel::Log::Init();
	//Hazel::Log::GetCoreLogger()->warn("Initialized Log");
	//Hazel::Log::GetClientLogger()->info("hello");
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);


	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif