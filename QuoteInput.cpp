#include "QuoteInput.h"

QuoteInput::QuoteInput() = default;

void QuoteInput::Execute(int option) {
	switch (option) {
	case 1:
		context->TransitTo("Step");
		break;
	case 2:
		context->TransitTo("Step");
		break;
	case 3:
		context->TransitTo("Main");
	default:
		break;
	}
}

void QuoteInput::SetContext(ApplicationContext* context) {
	this->context = context;
}
