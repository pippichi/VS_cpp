// cmath库函数运用.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
const double PI(3.1415926);
int main()
{
	double angle;
	cout << "Enter an angle:";
	cin >> angle;
	double radian = angle * PI / 180;
	cout << "sin(" << angle << "°)=" << sin(radian) << endl;
    return 0;
}

