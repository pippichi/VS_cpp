// 用istringstream将字符串转化成数值.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<sstream>
using namespace std;

template<class T>
inline T fromString(const string &str) {
	istringstream is(str);//创建字符串输入流
	T v;
	is >> v;//从字符串输入流中读取变量v
	return v;//返回变量v
}

int main()
{
	int v1 = fromString<int>("2");
	cout << v1 << endl;
	double v2 = fromString<double>("2.3");
	cout << v2 << endl;
    return 0;
}

