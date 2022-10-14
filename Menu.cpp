#include <iostream>
#include "Menu.h"

Menu& Menu::AddOption(const char* option) {
	options.push_back(option);
	return *this;
}

void Menu::DrawOptions() const {
	for (size_t i = 0; i < options.size(); i++) {
		std::cout << i + 1 << ") " << options[i] << std::endl;
	}
}

void Menu::HandleSelection() {
	std::cin >> currentOption;
}

int Menu::GetCurrentOption() const { return currentOption; }
