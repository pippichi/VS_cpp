// 函数嵌套调用.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int fun1(int x);
int fun2(int n, int m);
int main()
{
	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << fun2(a, b);
    return 0;
}
int fun1(int x) {
	return x * x;
}
int fun2(int n,int m) {
	return fun1(n) + fun1(m);
}
