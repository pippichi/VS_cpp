// 函数重载与嵌套复习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int max1(int x, int y) {
	if (x >= y) {
		return x;
	}
	else{
		return y;
	}
}
int max1(int x, int y, int z) {
	return(max1(x, y), z);
}
double max1(double x, double y) {
	if (abs(x - y) < 1e-6) return x;
	else if(x >= y) return x;
	else return y;
}
double max1(double x,double y,double z){
	return(max1(x, y), z);
}
int main()
{

    return 0;
}

