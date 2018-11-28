// 编程实现两字符串连接.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

char* link(char* a, char* b) {
	int m = 0, n = 0;
	while (a[m] != '\0') {
		m++;
	}

	while (b[n] != '\0') {
		n++;
	}

	char* c = new char[m + n + 1];
	for (int i = 0; i < m; i++) {
		c[i] = a[i];
	}
	for (int i = m; i < (n + m); i++) {
		c[i] = b[i - m];
	}
	c[n + m] = '\0';
	return c;
}
int main()
{
	char a[] = "abc";
	char b[] = "efd";
	cout << link(a, b) << endl;
    return 0;
}

