#include "STRING.h"
int main()
{
	char s1[] = "ABCDEFG";
	char s2[] = "abcde";
	STRING test(s1, s2);
	test.process();
	test.print();
	return 0;
}