// 求绝对值的函数模板.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<typename T>
T abs(T x) {
	return x > 0 ? x : -x;
}
int main()
{
	int x = -3;
	double y = -6.3;
	cout << abs(x) << abs(y);
    return 0;
}

