#pragma once
//将一个字符串交叉插入到另一个字符串中（假定两字符串不等长）。例如将字符串“abcde” 交叉插入字符串“ABCDEFG”的结果为“aAbBcCdDeEFG”或“AaBbCcDdEeFG”。
class STRING
{
private:
	//存放被插入的字符串
	char str1[60];
	//存放待插入的字符串
	char str2[40];
	//存放插入后的字符串
	char str3[100];
public:
	STRING(char *s1, char* s2);
	void process();
	void print();
};

