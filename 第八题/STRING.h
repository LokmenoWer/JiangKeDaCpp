#pragma once
//��һ���ַ���������뵽��һ���ַ����У��ٶ����ַ������ȳ��������罫�ַ�����abcde�� ��������ַ�����ABCDEFG���Ľ��Ϊ��aAbBcCdDeEFG����AaBbCcDdEeFG����
class STRING
{
private:
	//��ű�������ַ���
	char str1[60];
	//��Ŵ�������ַ���
	char str2[40];
	//��Ų������ַ���
	char str3[100];
public:
	STRING(char *s1, char* s2);
	void process();
	void print();
};

