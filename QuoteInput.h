#ifndef QUOTEINPUT_H
#define QUOTEINPUT_H

#include "IStrategy.h"
#include "ApplicationContext.h"

class QuoteInput : public IStrategy {
private:
	ApplicationContext* context = nullptr;
public:
	QuoteInput();
	void Execute(int option) override;
	void SetContext(ApplicationContext* context);
};

#endif // !QUOTEINPUT_H
