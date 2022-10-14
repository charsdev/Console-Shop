#include <iostream>
#include "QuoteScreen.h"

QuoteScreen::QuoteScreen() {
	menu.AddOption("Pantalon")
		.AddOption("Remera");
	quoteInput = new QuoteInput();
}

void QuoteScreen::OnOpen() {
	OnScreen();
}

void QuoteScreen::OnScreen() {
	std::cout << "Welcome to QuoteScreen" << std::endl;
	std::cout << "Press 3 if you want to back to main screen" << std::endl;
	std::cout << "----------------------------------------------" << std::endl;
	menu.DrawOptions();
	menu.HandleSelection();
	int currentOption = menu.GetCurrentOption();
	quoteInput->Execute(currentOption);
}

 void QuoteScreen::OnClose() {
	 Screen::Clear();
 }

void QuoteScreen::SetContext(ApplicationContext* ccontext) {
	this->context = ccontext;
	quoteInput->SetContext(ccontext);
}
