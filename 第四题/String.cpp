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
		cout << "���ַ����ǻ����ַ���" << endl;
		cout << "���ַ���Ϊ��" << str << endl;
	}
	else
	{
		cout << "���ַ������ǻ����ַ���" << endl;
		cout << "���ַ���Ϊ��" << str << endl;
	}
}

