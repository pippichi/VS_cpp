// 函数对象10-14，类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<numeric>
using namespace std;

class MultClass {
public:
	//重载操作符operator()
	int operator()(int x, int y) { return x * y; };
};

int main()
{
	int a[] = { 1,2,3,4,5 };
	const int N = sizeof(a) / sizeof(int);
	cout << "The result by multipling all elements in a is: "
		<< accumulate(a, a + N, 1, MultClass())
		<< endl;
    return 0;
}

