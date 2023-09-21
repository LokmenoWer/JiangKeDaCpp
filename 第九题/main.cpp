#include "MOVE.h"
int main()
{
	int a[] = { 21,65,43,87,12,84,44,97,32,55 };
	MOVE m(a, 10);
	m.print();
	m.change();
	m.print();
	return 0;
}