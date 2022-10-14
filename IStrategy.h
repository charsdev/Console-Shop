#ifndef ISTRATEGY_H
#define ISTRATEGY_H
class IStrategy {
public:
	//TODO: Change Strategy, cant be a swicth implementation
	virtual void Execute(int option) = 0;
	virtual ~IStrategy() = default;
};
#endif // !ISTRATEGY_H

