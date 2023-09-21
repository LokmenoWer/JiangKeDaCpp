#include "Palindrome.h"
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "请输入一个整数：" << endl;
	cin >> a;
	Palindrome p(a);
	p.huiwen();
	p.show();
	return 0;
}