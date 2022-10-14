#pragma once
#ifndef MENU_H
#define MENU_H

#include <vector>

class Menu
{
private:
	int currentOption = NULL;
public:
	std::vector<const char*> options;
	Menu() = default;
	Menu& AddOption(const char* option);
	void DrawOptions() const;
	void HandleSelection();
	int GetCurrentOption() const;
};
#endif // MENU_H

