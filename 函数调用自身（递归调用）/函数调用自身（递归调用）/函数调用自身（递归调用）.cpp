// 函数调用自身（递归调用）.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

unsigned fac(unsigned n);
int main()
{
	unsigned n;
	cout << "n=";
	cin >> n;
	cout<<n<<"!="<< fac(n)<<endl;
    return 0;
}

unsigned fac(unsigned n) {
	unsigned f;
	if (n == 1) {
		f = 1;
	}
	else {
		f = fac(n - 1)*n;
	}
	return f;
}