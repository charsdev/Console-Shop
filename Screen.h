#ifndef SCREEN_H
#define SCREEN_H

#include <Windows.h>

class ApplicationContext;

class Screen {
public:
	ApplicationContext* context = nullptr;
	virtual ~Screen() = default;
	virtual void OnOpen() = 0;
	virtual void OnScreen() = 0;
	virtual void OnClose() = 0;
	virtual void SetContext(ApplicationContext* ccontext);
	void Clear() const;
};
#endif //SCREEN_H
