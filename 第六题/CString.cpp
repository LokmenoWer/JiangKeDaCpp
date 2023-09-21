#include "CString.h"
#include <string.h>
#include <iostream>
using namespace std;
CString::CString(char* s, char s1[], char* s2)
{
	str = s;
	str1 = s1;
	str2 = s2;
	flag = 0;
}

void CString::Replace()
{
	while (strstr(str, str1) != NULL)
	{
		char* p = strstr(str, str1);
		int len = strlen(str);
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		int len3 = len - len1 + len2;
		char* temp = new char[len3 + 1];
		strncpy(temp, str, p - str);
		strncpy(temp + (p - str), str2, len2);
		strncpy(temp + (p - str) + len2, p + len1, len - (p - str) - len1);
		strcpy(str, temp);
		delete[] temp;
		flag = 1;
	}
}

void CString::Show() {
	if (flag == 1)
	{
		cout << "Ä¿±ê×Ö·û´®£º" << str1 << endl;
		cout << "Ìæ»»×Ö·û´®£º" << str2 << endl;
		cout << "Ìæ»»ºóµÄÔ­Ê¼×Ö·û´®£º" << str << endl;
	}
	else
	{
		cout << "Ô­Ê¼×Ö·û´®£º" << str << endl;
	}

}

CString::~CString()
{
	delete[] str;
	delete[] str1;
	delete[] str2;
}