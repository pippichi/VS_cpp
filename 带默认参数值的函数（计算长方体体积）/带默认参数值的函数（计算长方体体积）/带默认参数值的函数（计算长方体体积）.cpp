// 带默认参数值的函数（计算长方体体积）.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int getVolumn(int length, int height = 3, int weight = 4);
int main()
{
	const int X=10, Y=20, Z=30;
	cout << "Some box data is:";
	cout << getVolumn(X, Y, Z)<<endl;
	cout << "Some box data is:";
	cout << getVolumn(X, Y) << endl;
	cout << "Some box data is:";
	cout << getVolumn(X) << endl;
    return 0;
}

int getVolumn(int length, int height, int weight) {
	cout << "length: " << length << " height: " << height << " weight: " << weight << endl;
	return length * height*weight;
}
