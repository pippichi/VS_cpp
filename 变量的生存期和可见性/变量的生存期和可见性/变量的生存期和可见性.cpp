// 变量的生存期和可见性.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int i = 1;//i为全局变量，具有静态生存期。
void Other() {
	static int a = 2;
	static int b;
	//a，b为静态局部变量，具有全局寿命，局部可见。
	//只第一次进入函数时被初始化。

	int c = 10;//c为局部变量，具有动态生存期。
	//c 每次进入函数都会被初始化。

	a += 2; i += 32; c += 5;
	cout << "---OTHER---" << endl;
	cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c<<endl;
	b = a;
}

int main()
{
	static int a;//a为静态局部变量，具有全局寿命，局部可见。
	int b = -10;//b为局部变量，具有动态生存期。
	int c = 0;//c为局部变量，具有动态生存期。
	cout << "---MIAN---\n";
	cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
	c += 8; Other();
	cout << "---MIAN---\n";
	cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
	i += 10; Other();
    return 0;
}

