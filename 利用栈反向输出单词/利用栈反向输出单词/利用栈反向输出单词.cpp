// 利用栈反向输出单词.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<stack>
#include<iterator>
using namespace std;

int main()
{
	stack<char>s;
	string str;
	cin >> str;
	for (string::iterator iter = str.begin(); iter != str.end(); ++iter) {
		s.push(*iter);
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
    return 0;
}

