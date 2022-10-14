#ifndef APPLICATIONCONTEXT_H
#define APPLICATIONCONTEXT_H
#include <map>
#include "Screen.h"

class ApplicationContext {
private:
	std::map<const char*, Screen*> m_screens;
	Screen* m_currentScreen = nullptr;
	const char* currentScreenKey;
public:
	ApplicationContext() = default;
	~ApplicationContext() = default;
	explicit ApplicationContext(const char* name, Screen* root);
	ApplicationContext& AddScreen(const char* type, Screen* screen);
	const char* GetCurrentScreenKey();
	Screen* GetScreen(const char* type);
	void TransitTo(const char* screen);
};

#endif // APPLICATIONCONTEXT_H


