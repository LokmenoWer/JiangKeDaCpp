#pragma once
//ʵ���ַ���str1���ַ���str�г���ʱ�����ַ���str2�����滻
class CString
{
private:
	//ԭʼ�ַ���
	char *str;
	//Ŀ���ַ���
	char *str1;
	//�滻�ַ���
	char *str2;
	//����滻�Ƿ����
	int flag;
public:
	//�ø����Ĳ���s��s1��s2��ʼ�����ݳ�Աstr��str1��str2��flag����ȱʡ0
	CString(char *s,char s1[],char *s2);
	//�ж�str�ַ������Ƿ����str1�������־���str2�滻������ʲô�����������滻�ɹ��˱��flagΪ1�����滻���ɹ�����flagΪ0
	void Replace();
	//���滻�ɹ���������Ļ����ʾĿ���ַ������滻�ַ������滻���ԭʼ�ַ����������ɹ�����ʾԭʼ�ַ���
	void Show();
	//�ͷŶ�̬����Ŀռ�
	~CString();
};

