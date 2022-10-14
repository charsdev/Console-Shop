#include <iostream>
#include "UserInput.h"

UserInput::UserInput(ApplicationContext* context) : m_context(context) {
	strategies.insert(std::make_pair("Main", std::make_unique<MainInput>(context)));
	strategies.insert(std::make_pair("History", std::make_unique<HistoryInput>(context)));
	strategies.insert(std::make_pair("Quote", std::make_unique<QuoteInput>(context)));
	strategies.insert(std::make_pair("Step", std::make_unique<StepInput>(context)));
}

void UserInput::SetCurrentInputStrategy(IStrategy* strategy) {
	currentInputStrategy = strategy;
}

void UserInput::HandleInput() {
	std::cin >> option;
	currentInputStrategy->Execute(option);
}

IStrategy* UserInput::GetInputStrategy(const char* strategy) {
	return strategies[strategy].get();
}
