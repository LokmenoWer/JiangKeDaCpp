#pragma once
//实现绝对回文数。设计一个算法实现对任意整型数字判断是否为绝对回文数。所谓绝对回文数，是指十进制数和二进制数均对称的数
class Palindrome
{
private:
	int n; //整型数字
	int y; //标记是否为回文数
public:
	//构造函数，根据x参数初始化数据成员n，y初始化为0
	Palindrome(int m);
	//判断数n是否为绝对回文数
	void huiwen();
	//若该数为回文数，则在屏幕显示
	void show();
};

