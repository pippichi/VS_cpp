// void类型指针的使用.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	//!void voidObject 错误！不能声明void类型的变量
	void *pv;
	int i = 5;
	pv = &i;
	int *p=static_cast<int*>(pv);
	cout << "*p= " << *p << endl;
    return 0;
}

