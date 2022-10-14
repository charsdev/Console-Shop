#include "HistoryInput.h"

HistoryInput::HistoryInput(ApplicationContext* context) : context(context) {}

void HistoryInput::Execute(int option) {
	if (option == 3) {
		context->TransitTo("Main");
	}
}
