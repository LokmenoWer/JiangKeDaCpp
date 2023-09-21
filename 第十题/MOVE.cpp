#include "MOVE.h"
#include <iostream>
using namespace std;
MOVE::MOVE(char b[], int m)
{
	n = m;
	array = new char[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = b[i];
	}
}
void MOVE::change() 
{
	char* temp = new char[n];
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] >= 'a' && array[i] <= 'z')
		{
			temp[j] = array[i];
			j++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (array[i] >= 'A' && array[i] <= 'Z')
		{
			temp[j] = array[i];
			j++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		array[i] = temp[i];
	}
	delete[] temp;
}
void MOVE::print() 
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i];
	}
	cout << endl;

}
MOVE::~MOVE()
{
	delete[] array;
}