#include "Screen.h"

void Screen::SetContext(ApplicationContext* ccontext) {
	this->context = ccontext;
}

void Screen::Clear() const {
	system("cls");
}
