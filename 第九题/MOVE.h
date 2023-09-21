#pragma once
//对数组中元素进行循环换位，即每个元素后移三位，最后三个元素移到最前面
class MOVE
{
private:
	int array[20]; //一维整型数组
	int n; //数组中元素的个数
public:
	MOVE(int b[], int m); //构造函数
	void change(); //循环换位
	void print(); //输出数组中元素
};

