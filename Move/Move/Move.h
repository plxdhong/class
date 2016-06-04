#ifndef MOVE
#define MOVE
#include <iostream>

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	void Showmove() const;
	Move add(const Move & m) const;
	void reset(double a = 0, double b = 0);
};
#endif // !MOVE
