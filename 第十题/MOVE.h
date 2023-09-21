#pragma once
//实现将数组中大写字母元素放在小写字母元素的左边
class MOVE
{
private:
	char* array; //一维字符数组
	int n; //数组中元素的个数
public:
	MOVE(char b[], int m); //构造函数，初始化成员数据
	void change(); //进行排序换位
	void print(); //输出一维数组
	~MOVE(); //析构函数
};

