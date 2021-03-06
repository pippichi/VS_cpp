// ConsoleApplication21.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	cout << "Find 回文数(10-1000): " ;
	for (unsigned i = 1; i < 1000; i++) {
		if (Change(i)&&Change(i*i)&&Change(i*i*i)) {
			cout <<"i = "<<i<< endl;
			cout << "i*i = " << i * i<<endl;
			cout << "i*i*i = " << i * i*i<<endl;
		}
	}
    return 0;
}

bool Change(unsigned n) {
	unsigned i;
	unsigned m = 0;

	while (i>0) {
		m = m * 10 + i % 10;
		i /= 10;
	}
	return m==n;
}