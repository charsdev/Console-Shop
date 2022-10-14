#pragma once
#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <memory>
#include "Screen.h"
#include "Menu.h"
#include "MainInput.h"

class MainScreen : public Screen {
private:
	std::unique_ptr<MainInput> mainInput = nullptr;
	Menu menu;
public:
	MainScreen();
	~MainScreen() final = default;
	void OnOpen() override;
	void OnScreen() override;
	void OnClose() override;
	void SetContext(ApplicationContext* applicationContext) override;
};
#endif // MAINSCREEN_H




