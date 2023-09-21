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
	char* temp = new char[strlen(str1) - strlen(str2) + 1];
	strcpy(temp, str1 + strlen(str2) + 1);
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			str3[i] = str1[i / 2];
		}
		else
		{
			str3[i] = str2[i / 2];
		}
	}
	strcat(str3, temp);
	delete[] temp;

}
void STRING::print()
{
	cout << str3 << endl;
}