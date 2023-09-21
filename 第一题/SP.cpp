#include "SP.h"
#include <iostream>
using namespace std;
SP::SP(int n, int k)
{
	this->n = n;
	this->k = k;
}

int SP::power(int m, int n)
{
	int result = 1;
	for (int i = 0; i < n; i++)
	{
		result *= m;
	}
	return result;
}

int SP::fun()
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += power(i, k);
	}
	return result;
}

void SP::show()
{
	cout << "½á¹ûÎª£º" << fun() << endl;
}
