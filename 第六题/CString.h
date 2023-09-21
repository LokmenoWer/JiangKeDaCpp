#pragma once
//实现字符串str1在字符串str中出现时，用字符串str2进行替换
class CString
{
private:
	//原始字符串
	char *str;
	//目标字符串
	char *str1;
	//替换字符串
	char *str2;
	//标记替换是否完成
	int flag;
public:
	//用给定的参数s、s1和s2初始化数据成员str、str1和str2。flag设置缺省0
	CString(char *s,char s1[],char *s2);
	//判断str字符串中是否出现str1，若出现就用str2替换，否则什么都不做。若替换成功了标记flag为1，若替换不成功则标记flag为0
	void Replace();
	//若替换成功，则在屏幕上显示目标字符串、替换字符串和替换后的原始字符串；若不成功则显示原始字符串
	void Show();
	//释放动态分配的空间
	~CString();
};

