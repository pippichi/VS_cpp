// 起泡排序.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
void mySwap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}

template<class T>
void bubbleSort(T a[], int n) {
	int i = n - 1;
	while (i > 0) {
		int lastExchangeIndex = 0;
		for (int j = 0; j < i; j++) {
			if (a[j + 1] < a[j]) {
				mySwap(a[j], a[j + 1]);
				lastExchangeIndex = j;
			}
		}
		i = lastExchangeIndex;
	}
}

int main()
{
    return 0;
}

