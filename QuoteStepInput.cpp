#include "QuoteStepScreen.h"
#include "QuoteStepInput.h"

 QuoteStepInput::QuoteStepInput(QuoteStepScreen* quoteStepScreen) {
	m_quoteStepScreen = quoteStepScreen;
}

 void QuoteStepInput::HandleInput() {
	int option;
	m_quoteStepScreen->Clear();
	m_quoteStepScreen->Step2TshirtA();
	std::cin >> option;
	m_quoteStepScreen->Clear();
	m_quoteStepScreen->Step2TShirtB();
	std::cin >> option;
	m_quoteStepScreen->Clear();
	m_quoteStepScreen->Step3();
	std::cin >> option;
	m_quoteStepScreen->Clear();
	m_quoteStepScreen->Step4();
	std::cin >> option;
	m_quoteStepScreen->Clear();
	m_quoteStepScreen->Step5();
	std::cin >> option;
	context->TransitTo("Quote");
}

inline void QuoteStepInput::SetContext(ApplicationContext* applicationContext) {
	context = applicationContext;
}
