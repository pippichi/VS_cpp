// 映射输出字母出现次数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<map>
#include<cctype>
using namespace std;

int main()
{
	map<char, int> s;//用来存储字母次数的映射
	char c;
	do {
		cin >> c;
		if (isalpha(c)) {
			c = tolower(c);
			s[c]++;//将该字母出现的频率+1
		}
	} while (c != '.');
	for (map<char, int>::iterator iter = s.begin(); iter != s.end(); ++iter) {
		cout << iter->first << " " << iter->second << endl;
	}
    return 0;
}

