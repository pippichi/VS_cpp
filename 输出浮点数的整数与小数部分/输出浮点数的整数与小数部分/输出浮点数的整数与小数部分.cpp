// 输出浮点数的整数与小数部分.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void splitFloat(float x,int *intPart,float *fracPart) {
	*intPart = static_cast<int>(x);
	*fracPart = x - *intPart;
}
int main()
{
	for (int i = 0; i < 3; i++) {
		float x,f; int y;
		cout << "输入第 " << (i + 1) << " 个浮点数: " << endl;
		cin >> x;
		splitFloat(x, &y, &f);
		cout << "y= " << y << " ;f= " << f;
	}
    return 0;
}

