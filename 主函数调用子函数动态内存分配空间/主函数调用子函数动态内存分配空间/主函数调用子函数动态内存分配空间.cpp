// 主函数调用子函数动态内存分配空间.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int *newintvar();
	int *intptr = newintvar();
	*intptr = 5;
	delete intptr;//如果忘记在这里释放，会造成内存泄漏
    return 0;
}
int *newintvar() {
	int *p = new int();
	return p;
}
