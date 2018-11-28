// 利用STL标准函数对象.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<functional>//包含标准函数对象头文件
#include<numeric>//包含数值算法头文件
using namespace std;

int main()
{
	int a[] = { 1,2,3,4,5 };
	const int N = sizeof(a) / sizeof(int);
	cout << "The result by multipling all elements in a is: "
		<< accumulate(a, a + N, 1, multiplies<int>())
		<< endl;
    return 0;
}

