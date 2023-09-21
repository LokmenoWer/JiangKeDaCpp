#pragma once
//判断该字符串是否为回文字符串
class String
{
private:
	char* str;
	int y; //标记是否为回文字符串
public:
	//构造函数，用给定的参数s初始化数据成员str。y初始化为0
	String(char* s);
	//判断str所指向的字符串是否为回文字符串
	void huiwen();
	//在屏幕上显示字符串
	void show();
};

