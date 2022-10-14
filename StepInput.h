#ifndef STEPINPUT_H
#define STEPINPUT_H

#include "IStrategy.h"
#include "ApplicationContext.h"

class StepInput : public IStrategy {
public:
	ApplicationContext* context = nullptr;
	explicit StepInput(ApplicationContext* context);
	void Execute(int option) override;
};
#endif // STEPINPUT_H




