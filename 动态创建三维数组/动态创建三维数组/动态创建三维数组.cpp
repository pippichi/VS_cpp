// 动态创建三维数组.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	/*int(*p)[8][9];
	p = new int[7][8][9];*/
	int(*p)[8][9] = new int[7][8][9];
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < 9; k++) {
				*(*(*(p + i) + j) + k) = i * 100 + j * 10 + k;
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < 9; k++) {
				if (p[i][j][k] / 10 == 0) {
					cout << " " << p[i][j][k]<<" ";
				}
				else {
					cout << p[i][j][k] << " ";
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	delete[] p;

    return 0;
}

