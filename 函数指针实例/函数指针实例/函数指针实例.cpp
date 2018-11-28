// 函数指针实例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int computer(int a, int b, int(*func)(int, int)) {
	return func(a, b);
}
int max(int a, int b) {
	return (a > b) ? a : b;
}

int min(int a, int b) {
	return (a < b) ? a : b;
}

int sum(int a, int b) {
	return a + b;


}
int main()
{
	int x, y, res;
	cout << "输入两个数： " << endl;
	cin >> x >> y;

	res = computer(x, y, &max);
	cout << "Max of x and y is: " << res << endl;
	res = computer(x, y, &min);
	cout << "Mix of x and y is: " << res << endl;
	res = computer(x, y, &sum);
	cout << "Sum of x and y is: " << res << endl;
    return 0;
}

