#include "MainInput.h"

MainInput::MainInput() = default;

void MainInput::SetContext(ApplicationContext* applicationContext) {
	context = applicationContext;
}

inline void MainInput::Execute(int option) {
	switch (option) {
	case 1:
		context->TransitTo("History");
		break;
	case 2:
		context->TransitTo("Quote");
		break;
	case 3:
		exit(true);
	default:
		break;
	}
}
