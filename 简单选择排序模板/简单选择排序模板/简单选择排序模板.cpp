// 简单选择排序模板.cpp: 定义控制台应用程序的入口点。
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
void selectionSort(T list[], int size) {
	for (int i = 0; i < size - 1; i++) {
		auto temp = i;
		for (int j = i + 1; j < size; j++) {
			if (list[j] < list[temp]) {
				temp = j;
			}
		}
		mySwap(list[j], list[temp]);
	}
}

int main()
{
    return 0;
}

