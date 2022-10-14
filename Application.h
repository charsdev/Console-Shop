#ifndef APPLICATION_H
#define APPLICATION_H

#include "MainScreen.h"
#include "QuoteScreen.h"
#include "HistoryScreen.h"
#include "QuoteStepScreen.h"
#include "ApplicationContext.h"

class Application {
private:
	MainScreen mainScreen;
	HistoryScreen historyScreen;
	QuoteScreen quoteScreen;
	QuoteStepScreen quoteStep;
	ApplicationContext context;
public:
	Application();
	~Application() = default;
	void Run();
};

#endif // APPLICATION_H


