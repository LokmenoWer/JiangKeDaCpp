#pragma once
//ʵ�ֽ������д�д��ĸԪ�ط���Сд��ĸԪ�ص����
class MOVE
{
private:
	char* array; //һά�ַ�����
	int n; //������Ԫ�صĸ���
public:
	MOVE(char b[], int m); //���캯������ʼ����Ա����
	void change(); //��������λ
	void print(); //���һά����
	~MOVE(); //��������
};

