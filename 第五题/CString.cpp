#include "CString.h"
#include <iostream>
using namespace std;

CString::CString(char* s)
{
	str = s;
	p = nullptr;
	size = 0;
}

void CString::Count()
{
	int len = strlen(str);
	p = new char[len][2];
	for (int i = 0; i < len; i++)
	{
		p[i][0] = str[i];
		p[i][1] = 1;
	}
	size = 1;
	for (int i = 1; i < len; i++)
	{
		bool flag = true;
		for (int j = 0; j < size; j++)
		{
			if (p[j][0] == str[i])
			{
				p[j][1]++;
				flag = false;
				break;
			}
		}
		if (flag)
		{
			p[size][0] = str[i];
			p[size][1] = 1;
			size++;
		}
	}
	char(*temp)[2] = new char[size][2];
	for (int i = 0; i < size; i++)
	{
		temp[i][0] = p[i][0];
		temp[i][1] = p[i][1];
	}
	delete[] p;
	p = temp;
}

void CString::Show()
{
	cout << "字符串为：" << str << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "字符" << p[i][0] << "出现的次数为：" << (int)p[i][1] << endl;
	}
}

CString::~CString()
{
	delete[] p;
}
