#include "MOVE.h"
int main()
{
	char a[] = "fdsUFfsTjfsKFEkWC";
	MOVE m(a, 16);
	m.print();
	m.change();
	m.print();
	return 0;
}