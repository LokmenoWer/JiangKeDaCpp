#include "Palindrome.h"
#include <iostream>
using namespace std;
Palindrome::Palindrome(int m)
{
	n = m;
	y = 0;
}

void Palindrome::huiwen()
{
	int a[100], b[100], i, j, k;
	for (i = 0; n != 0; i++)
	{
		a[i] = n % 10;
		n = n / 10;
	}
	for (j = 0; j < i; j++)
	{
		b[j] = a[j];
	}
	for (k = 0; k < i; k++)
	{
		if (a[k] != b[i - k - 1])
		{
			y = 0;
			break;
		}
		else
		{
			y = 1;
		}
	}
}

void Palindrome::show()
{
	if (y == 1)
	{
		cout << "该数为绝对回文数" << endl;
	}
	else
	{
		cout << "该数不为绝对回文数" << endl;
	}
}
