// 三角形面积计算_抛出异常.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<stdexcept>
using namespace std;

double area(double a, double b, double c) {
	if (a <= 0 || b <= 0 || c <= 0)
		throw invalid_argument("the side length should be positive.");
	if (a + b <= c || a + c <= b || c + b <= a)
		throw invalid_argument("the side length shoule fit the triangle inequation");
	double s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main()
{
	double a, b, c;
	cout << "Please input the side lengths of a triangle: ";
	cin >> a >> b >> c;
	try {
		double s = area(a, b, c);
		cout << "Area: " << s << endl;
	}catch(exception &e){
		cout << "Error: " << e.what() << endl;//stdexcept中有exception类，该类中有what()函数输出错误信息
	}
    return 0;
}

