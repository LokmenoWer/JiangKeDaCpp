#include "Palindrome.h"
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "������һ��������" << endl;
	cin >> a;
	Palindrome p(a);
	p.huiwen();
	p.show();
	return 0;
}