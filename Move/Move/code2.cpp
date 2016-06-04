#include "Move.h"
int main()
{
	using namespace std;
	Move ak = Move(3, 7);
	Move cd(3, 7);
	ak.Showmove();
	Move to = cd.add(ak);
	to.Showmove();
	to.reset();
	to.Showmove();
	cin.get();
	return 0;
}