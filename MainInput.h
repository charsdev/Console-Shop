#ifndef MAININPUT_H
#define MAININPUT_H

#include "IStrategy.h"
#include "ApplicationContext.h"

class MainInput : public IStrategy {
private:
	ApplicationContext* context = nullptr;
public:
	MainInput();
	void SetContext(ApplicationContext* applicationContext);
	void Execute(int option) override;
};

#endif // !MAININPUT_H



