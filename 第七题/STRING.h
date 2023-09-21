#pragma once
//将一个字符串交叉插入到另一个字符串中（假定两字符串等长）。例如将字符串“abcde” 交叉插入字符串“ABCDE”的结果为“aAbBcCdDeE”或“AaBbCcDdEe”
class STRING
{
private:
	//存放被插入的字符串
	char str1[80];
	//存放待插入的字符串
	char str2[40];
public:
	//构造函数，用s1和s2初始化str1和str2
	STRING(char *s1, char* s2);
	//将str2中的字符串插入到str1中
	void process();
	//输出插入后的字符串
	void print();

};

