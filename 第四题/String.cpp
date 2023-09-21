#include "String.h"
#include <string.h>
#include <iostream>
using namespace std;

String::String(char* s)
{
	str = s;
	y = 0;
}

void String::huiwen()
{
	int i, j;
	for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
	{
		if (str[i] != str[j])
		{
			y = 1;
			break;
		}
	}
}

void String::show()
{
	if (y == 0)
	{
		cout << "该字符串是回文字符串" << endl;
		cout << "该字符串为：" << str << endl;
	}
	else
	{
		cout << "该字符串不是回文字符串" << endl;
		cout << "该字符串为：" << str << endl;
	}
}

