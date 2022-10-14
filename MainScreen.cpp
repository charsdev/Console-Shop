#include <iostream>
#include "MainScreen.h"

MainScreen::MainScreen() {
	mainInput = std::make_unique<MainInput>();

	menu.AddOption("History")
		.AddOption("Quote")
		.AddOption("Exit");
}

void MainScreen::OnOpen() {
	Screen::Clear();
	OnScreen();
}

void MainScreen::OnScreen() {
	std::cout << "Welcome to MainScreen" << std::endl;
	menu.DrawOptions();
	menu.HandleSelection();
	mainInput->Execute(menu.GetCurrentOption());
}

void MainScreen::OnClose() {
	Screen::Clear();
}

void MainScreen::SetContext(ApplicationContext* ccontext) {
	this->context = ccontext;
	this->mainInput->SetContext(ccontext);
}