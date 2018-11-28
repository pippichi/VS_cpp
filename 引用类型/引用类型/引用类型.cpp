// 引用类型.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//符号&为引用符，使得 x有两个名字：x和a；y有两个名字：y和b
void swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}
int main()
{
	int x, y;
	cout << "输入x，y的值：\n";
	cin >> x >> y;
	swap(x, y);
	cout << "x=" << x<<endl;
	cout << "y=" << y<<endl;
    return 0;
}

