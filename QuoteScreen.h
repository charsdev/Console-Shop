#ifndef QUOTESCREEN_H
#define QUOTESCREEN_H

#include "Screen.h"
#include "Menu.h"
#include "QuoteInput.h"

class QuoteScreen : public Screen {
private:
	QuoteInput* quoteInput = nullptr;
public:
	Menu menu;
	QuoteScreen();
	~QuoteScreen() final = default;
	void OnOpen() override;
	void OnScreen() override;
	void OnClose() override;
	void SetContext(ApplicationContext* ccontext) override;
};
#endif // QUOTESCREEN_H
