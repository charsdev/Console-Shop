#include "StepInput.h"

StepInput::StepInput(ApplicationContext* context) : context(context) {}

void StepInput::Execute(int option) {
	switch (option) {
	case 1:
		context->TransitTo("Step");
		break;
	case 2:
		context->TransitTo("Step");
		break;
	case 3:
		exit(true);
	default:
		break;
	}
}
