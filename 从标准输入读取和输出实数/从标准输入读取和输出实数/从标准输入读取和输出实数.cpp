// 从标准输入读取和输出实数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<functional>
#include<algorithm>
#include<iterator>
using namespace std;

double square(double x) {
	return x * x;
}
int main()
{
	transform(istream_iterator<double>(cin), istream_iterator<double>(), ostream_iterator<double>(cout,"\t"), square);
	cout << endl;
    return 0;
}

