// width控制输出宽度.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	double A[] = { 1.23,2.43,231.2,2221.211 };
	cout.width(10);
	for (int i = 0; i < size(A); i++) {
		cout << A[i] << endl;
	}

	string name[] = { "qyf","nig","107","116" };

	cout << setiosflags(ios_base::fixed);//小数点定点输出
	cout << setiosflags(ios_base::scientific);//科学记数法输出



	for (int i = 0; i < size(name); i++) {
		cout << setiosflags(ios_base::left)
			<< setw(6) << name[i]
			<< resetiosflags(ios_base::left)//清除左对齐设置
			//setpricision()控制小数的位数
			<< setw(10) << setprecision(1)<<A[i] << endl;
	}
    return 0;
}

