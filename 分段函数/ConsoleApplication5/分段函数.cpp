// ConsoleApplication5.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
const double TINY_VALUE = 1e-10;
double tsin(double x);
int main()
{
	double k, r, s;
	cout << "r=";
	cin >> r;
	cout << "\ns=";
	cin >> s;
	if (r*r <= s * s) {
		k = sqrt(tsin(r)*tsin(r) + tsin(s)*tsin(s));
	}
	else {
		k = tsin(r*s) / 2;
	}
	cout << k << endl;
    return 0;
}
double tsin(double x) {
	int i=1;
	double m = 0;
	double t = x;
	do {
		m += t;
		i++;
		t = -t * x*x / (2*i - 1) / (2*i - 2);
	} while (fabs(t) >= TINY_VALUE);
	return m;
}
