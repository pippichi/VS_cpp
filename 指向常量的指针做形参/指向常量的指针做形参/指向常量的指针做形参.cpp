// 指向常量的指针做形参.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

const int N = 6;
void print(const int *p,int n);

int main()
{
	int array[N];
	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}
	print(array, N);
    return 0;
}

void print(const int *p, int n) {
	cout << "{" << *p;
	for (int i = 0; i < n; i++) {
		cout << " , " << *(p + i);
	}
	cout << "}"<<endl;
}

