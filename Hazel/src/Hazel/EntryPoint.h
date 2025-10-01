#pragma once

#ifdef HZ_PLATFORM_WINDOWS //in Hazel Preprocessor

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("InitializedLog");

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif