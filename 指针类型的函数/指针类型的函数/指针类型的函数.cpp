// 指针类型的函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

const int N = 10;
int main()
{
	int *search(int *p,int n);
	int array[10];
	cout << "输入十个数： " << endl;
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}
	search(array, N);
    return 0;
}

int *search(int *p, int n) {
	for (int i = 0; i < n; i++) {
		if (*(p + i) == 0) {
			return &p[i];
		}
	}
}

