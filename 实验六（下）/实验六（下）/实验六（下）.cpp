// 实验六（下）.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int **a;
	a = new int *[3];
	for (int i = 0; i < 3; i++) {
		a[i] = new int[3];
	}
	cout << "输入就个元素作为矩阵的元素值： " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	cout << "初始矩阵：" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < i; j++)
			swap(a[i][j], a[j][i]);
	cout << "转置矩阵:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}
    return 0;
}

