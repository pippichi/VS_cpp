// ConsoleApplication3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

double arctan(double x);
int main()
{
	double PI = 16 * arctan(1 / 5.0) - 4 * arctan(1 / 239.0);
	cout << "PI=" << PI << endl;
	return 0;
}

double arctan(double x) {
	double sqr = x * x;
	double e = x;
	double r = 0;
	int i = 1;
	while (e / i > 1E-15) {
		double f = e / i;
		r = (i % 4 == 1) ? r + f : r - f;
		e = e * sqr;
		i += 2;
	}
	return r;
}