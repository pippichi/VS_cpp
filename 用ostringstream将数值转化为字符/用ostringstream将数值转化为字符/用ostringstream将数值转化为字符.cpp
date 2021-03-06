// 用ostringstream将数值转化为字符.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

template<class T>
inline string toString(const T&v) {
	ostringstream os;//创建字符串输出流
	os << v;//将变量v的值写入字符串流
	return os.str();//返回输出流生成的字符串//str()将os中已经定义好的字符串取出来.
}

int main()
{
	string str1 = toString(5);
	cout << str1 << endl;
	string str2 = toString(2.3);
	cout << str2 << endl;
    return 0;
}

