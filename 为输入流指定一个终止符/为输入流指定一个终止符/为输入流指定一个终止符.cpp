// 为输入流指定一个终止符.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string line;
	cout << "Type a line terminated by 't'" << endl;
	getline(cin , line, 't');//'t'为终止符
	cout << line<<endl;
    return 0;
}

