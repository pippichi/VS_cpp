// get函数应用.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	char ch;
	while ((ch = cin.get()) != EOF)//EOF为文件结束标志，Windows中一般是ctrl+z键
		cout.put(ch);
    return 0;
}

