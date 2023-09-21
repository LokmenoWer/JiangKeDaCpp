#pragma once
//将数组中最大元素的值与最小元素的值互换
class MOVE
{
private:
	int* array; //一维整型数组
	int n; //数组中元素的个数
public:
	//构造函数，初始化成员数据
	MOVE(int b[], int m);
	//输出平均值，并将数组中的元素按要求重新放置
	void exchange();
	//输出一维数组
	void print();
	//析构函数
	~MOVE();
};

