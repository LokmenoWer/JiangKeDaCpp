#include "STRING.h"
#include <string>
#include <iostream>
using namespace std;
STRING::STRING(char* s1, char* s2)
{
	strcpy(str1, s1);
	strcpy(str2, s2);
}

void STRING::process()
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len = len1 + len2;
	char* temp = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			temp[i] = str1[i / 2];
		}
		else
		{
			temp[i] = str2[i / 2];
		}
	}
	temp[len] = '\0';
	strcpy(str1, temp);
	delete[] temp;
}

void STRING::print()
{
	cout << str1 << endl;
}
