// 函数模板的实例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
void outputArray(const T *array, int count) {
	for (int i = 0; i < count; i++) {
		cout << array[i] << " " ;
	}
	cout << endl;
}
int main()
{
	const int A_COUNT = 8, B_COUNT = 8, C_COUNT = 20;
	int a[A_COUNT] = { 1,2,3,4,5,6,7,8 };
	double b[B_COUNT] = { 1.1,2.3,3.2,1.2,4.2,3.1,1.5,6.1 };
	char c[C_COUNT] = "Welcome!";
	cout << "a array contains: " << endl;
	outputArray(a,A_COUNT);
	cout << "b array contains: " << endl;
	outputArray(b, B_COUNT);
	cout << "c array contains: " << endl;
	outputArray(c, C_COUNT);
    return 0;
}

