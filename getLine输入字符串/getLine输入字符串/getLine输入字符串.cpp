// getLine输入字符串.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string city, state;
	for (int i = 0; i < 2; i++) {
		//string city, state;
		getline(cin, city, ',');
		getline(cin, state);
		cout << "City: " << city << "\tState: " << state << endl;
	}
    return 0;
}

