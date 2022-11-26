#pragma once

#ifdef CH_PLATFORM_WINDOWS


extern Chill::Application* Chill::CreateApplication();



int main(int argc, char **argv) {

	auto app = Chill::CreateApplication();
	app->Run();
	delete app;
}

#endif // CH_PLATFORM_WINDOWS
