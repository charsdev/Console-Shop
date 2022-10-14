#ifndef QUOTESTEPINPUT_H
#define QUOTESTEPINPUT_H

#include <iostream>
#include "ApplicationContext.h"

class QuoteStepScreen;

class QuoteStepInput
{
private:
	ApplicationContext* context = nullptr;
	QuoteStepScreen* m_quoteStepScreen = nullptr;
public:
	explicit QuoteStepInput(QuoteStepScreen* quoteStepScreen);
	void HandleInput();
	void SetContext(ApplicationContext* applicationContext);
};


#endif // !QUOTESTEPINPUT_H
