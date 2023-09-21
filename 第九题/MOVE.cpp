#include "MOVE.h"
#include <iostream>
using namespace std;
MOVE::MOVE(int b[], int m)
{
	n = m;
	for (int i = 0; i < n; i++) {
		array[i] = b[i];
	}
}

void MOVE::change()
{
	int temp[3];
	for (int i = 0; i < 3; i++)
		temp[i] = array[n - 3 + i];
	for (int i = n - 1; i >= 3; i--)
		array[i] = array[i - 3];
	for (int i = 0; i < 3; i++)
		array[i] = temp[i];
}
void MOVE::print()
{
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}