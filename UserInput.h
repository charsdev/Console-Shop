#ifndef USERINPUT_H
#define USERINPUT_H

#include <memory>
#include "IStrategy.h"
#include "MainInput.h"
#include "HistoryInput.h"
#include "QuoteInput.h"
#include "StepInput.h"

class AplicationContext;

class UserInput {
private:
	ApplicationContext* m_context = nullptr;
	IStrategy* currentInputStrategy = nullptr;
	std::map<const char*, std::unique_ptr<IStrategy>> strategies;
	int option = NULL;
public:
	explicit UserInput(ApplicationContext* context);
	void SetCurrentInputStrategy(IStrategy* strategy);
	void HandleInput();
	IStrategy* GetInputStrategy(const char* strategy);
};
#endif // !USERINPUT_H

