#pragma once
//�жϸ��ַ����Ƿ�Ϊ�����ַ���
class String
{
private:
	char* str;
	int y; //����Ƿ�Ϊ�����ַ���
public:
	//���캯�����ø����Ĳ���s��ʼ�����ݳ�Աstr��y��ʼ��Ϊ0
	String(char* s);
	//�ж�str��ָ����ַ����Ƿ�Ϊ�����ַ���
	void huiwen();
	//����Ļ����ʾ�ַ���
	void show();
};

