#include "Application.h"

Application::Application() {
	setlocale(LC_ALL, "es_Es");
	SetConsoleTitleW(L"Cotizador Express");

	context.AddScreen("Main", &mainScreen)
		.AddScreen("History", &historyScreen)
		.AddScreen("Quote", &quoteScreen)
		.AddScreen("Step", &quoteStep);
}

void Application::Run() {
	context.TransitTo("Main");
}
