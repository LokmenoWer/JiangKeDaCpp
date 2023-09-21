#include "CString.h"
#include <iostream>
using namespace std;
int main() 
{
	char s[] = "abdabcdesffffd";
	CString test(s);
	test.Count();
	test.Show();
	return 0;
}