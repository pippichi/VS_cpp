// 利用指针数组存放矩阵.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int line1[3] = { 1,2,3 };
	int line2[3] = { 4,5,6 };
	int line3[3] = { 7,8,9 };

	int *pLine[3] = { line1,line2,line3 };
	cout << "Matrix test:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << pLine[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}

