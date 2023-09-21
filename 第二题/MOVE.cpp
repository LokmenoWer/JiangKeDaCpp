#include "MOVE.h"
#include <iostream>
using namespace std;
MOVE::MOVE(int b[], int m)
{
	n = m;
	array = new int[n];
	for (int i = 0; i < n; i++) {
		array[i] = b[i];
	}
}

void MOVE::exchange()
{
	int max = array[0], min = array[0];
	int max_index = 0, min_index = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] > max) {
			max = array[i];
			max_index = i;
		}
		if (array[i] < min) {
			min = array[i];
			min_index = i;
		}
	}
	int temp = array[max_index];
	array[max_index] = array[min_index];
	array[min_index] = temp;
}

void MOVE::print()
{
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

MOVE::~MOVE()
{
	delete[] array;
}
