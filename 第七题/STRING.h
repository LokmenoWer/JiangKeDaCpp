#pragma once
//��һ���ַ���������뵽��һ���ַ����У��ٶ����ַ����ȳ��������罫�ַ�����abcde�� ��������ַ�����ABCDE���Ľ��Ϊ��aAbBcCdDeE����AaBbCcDdEe��
class STRING
{
private:
	//��ű�������ַ���
	char str1[80];
	//��Ŵ�������ַ���
	char str2[40];
public:
	//���캯������s1��s2��ʼ��str1��str2
	STRING(char *s1, char* s2);
	//��str2�е��ַ������뵽str1��
	void process();
	//����������ַ���
	void print();

};

