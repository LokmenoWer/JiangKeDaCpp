#pragma once
//�����������Ԫ�ص�ֵ����СԪ�ص�ֵ����
class MOVE
{
private:
	int* array; //һά��������
	int n; //������Ԫ�صĸ���
public:
	//���캯������ʼ����Ա����
	MOVE(int b[], int m);
	//���ƽ��ֵ�����������е�Ԫ�ذ�Ҫ�����·���
	void exchange();
	//���һά����
	void print();
	//��������
	~MOVE();
};

