// clock（）时间.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	clock_t start, end;
	start = clock();
	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < 10000; j++) {}
	}
	end = clock();
	cout <<(double)(end - start) / CLOCKS_PER_SEC << endl;
    return 0;
}

