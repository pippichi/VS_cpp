// ConsoleApplication2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
double power(int x, int y);
int main()
{
	int value = 0;
	cout << "输入一个八位二进制数： " << endl;
	for (int i = 7; i >= 0; i--) {
		char ch;
		cin >> ch;
		if (ch == '1') {
			value += static_cast<int>(pow(2, i));
		}
	}
	cout << "该二进制数转化为十进制数后是： " << value << endl;
	return 0;
}
double power(int x, int y) {
	double val = 1;
	while (y--)
		val *= x;
	return val;
}
