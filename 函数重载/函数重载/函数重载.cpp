// 函数重载.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using  namespace std;

int sumOfTwoNum(int x, int y) {
	return x * x + y * y;
}
double sumOfTwoNum(double x,double y) {
	return x * x + y * y;
}
int main()
{
	int n, m;
	cout << "Input two numbers: \n";
	cin >> n >> m;
	cout << sumOfTwoNum(n, m)<<endl;
	double x, y;
	cout << "Input two real numbers: \n";
	cin >> x >> y;
	cout << sumOfTwoNum(x, y)<<endl;
    return 0;
}

