#include "Move.h"
Move::Move(double a, double b)
{
	x = a;
	y = b;
}
void Move::Showmove() const
{
	using namespace std;
	cout << "(" << x << "," << y << ")" << endl;
}
Move Move::add(const Move & m) const
{
	Move temp;
	int e;
	int f;
	e = (*this).x + m.x;
	f = (*this).y + m.y;
	temp.reset(e, f);
	return temp;
}
void Move::reset(double a, double b)
{
	x = a;
	y = b;
}