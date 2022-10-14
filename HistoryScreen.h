#ifndef HISTORYSCREEN_H
#define HISTORYSCREEN_H

#include <iostream>
#include "Screen.h"

class HistoryScreen : public Screen {
public:
	HistoryScreen() = default;

	void OnOpen() override {
		OnScreen();
	}

	void OnScreen() override {
		std::cout << "Welcome to HistoryScreen" << std::endl;
	}

	void OnClose() override {
		Screen::Clear();
	}
};
#endif // !HISTORYSCREEN_H

