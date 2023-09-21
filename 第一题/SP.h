#pragma once
class SP
{
private:
	int n;
	int k;
public:
	//构造函数，初始化成员数据n和k
	SP(int n, int k);
	//计算m的n次方
	int power(int m,int n);
	//求公式的累加和
	int fun();
	//输出求得的结果
	void show();

};

