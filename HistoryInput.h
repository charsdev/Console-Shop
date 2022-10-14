#ifndef HISTORYINPUT_H
#define HISTORYINPUT_H

#include "IStrategy.h"
#include "ApplicationContext.h"

class HistoryInput : public IStrategy {
public:
	ApplicationContext* context = nullptr;
	explicit HistoryInput(ApplicationContext* context);
	void Execute(int option) override;
};

#endif // !HISTORYINPUT_H

