#include "ApplicationContext.h"

ApplicationContext::ApplicationContext(const char* name, Screen* root) :
	m_currentScreen(root), currentScreenKey(name) {
	m_screens.insert(std::make_pair(name, root));
	m_currentScreen->SetContext(this);
}

ApplicationContext& ApplicationContext::AddScreen(const char* type, Screen* screen) {
	auto it = m_screens.find(type);
	if (it != m_screens.end()) {
		m_screens.erase(it);
	}
	screen->SetContext(this);
	m_screens.insert(std::make_pair(type, screen));
	return *this;
}

const char* ApplicationContext::GetCurrentScreenKey() {
	return currentScreenKey;
}

Screen* ApplicationContext::GetScreen(const char* type) {
	if (m_screens.count(type) == 0) {
		return nullptr;
	}
	return m_screens[type];
}

void ApplicationContext::TransitTo(const char* screen) {
	auto screenToGo = GetScreen(screen);
	if (screenToGo == nullptr) {
		return;
	}
	if (m_currentScreen != nullptr) {
		m_currentScreen->OnClose();
	}
	m_currentScreen = screenToGo;
	m_currentScreen->OnOpen();
	currentScreenKey = screen;
}
