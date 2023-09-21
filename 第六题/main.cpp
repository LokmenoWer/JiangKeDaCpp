#include "CString.h"
int main()
{
	char s[] = "I am a student, you are student too, we are all student.";
	char s1[] = "student";
	char s2[] = "teacher";
	CString test(s, s1, s2);
	test.Replace();
	test.Show();
	return 0;
}