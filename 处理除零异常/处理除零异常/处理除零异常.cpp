// 处理除零异常.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int divide(int x, int y) {
	if (y == 0)
		throw x;
	return x / y;
}

int main()
{
	try {
		cout << "8 / 2 = " << divide(8, 2) << endl;
		cout << "8 / 0 = " << divide(8, 0) << endl;//这一行被检查出有问题后，后面的就不会再被执行
		cout << "7 / 1 = " << divide(7, 1) << endl;
	}
	catch (int e) {//这里的e跟上面'throw x'中的x的类型要一样
		cout << e << " is divided by zero!" << endl;
	}
	cout << "That is ok." << endl;
    return 0;
}

