// 基于范围的For循环举例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int array[3] = { 1,2,3 };
	/*int *p;
	for (p = array; p < array + sizeof(array) / sizeof(int); ++p) {
		*p += 2;
		cout << *p << endl;
	}
    return 0;*/


	//基于范围的for循环
	for (int &e : array) {
		e += 2;
		cout << e << endl;
	}
}

