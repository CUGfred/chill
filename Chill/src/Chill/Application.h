#pragma once

#include "Core.h"

namespace Chill {

	class CHILL Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}

