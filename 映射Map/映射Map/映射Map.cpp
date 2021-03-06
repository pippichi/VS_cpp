// 映射Map.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<map>
#include<string>
#include<utility>
using namespace std;

int main()
{
	map<string, int> courses;
	//将课程信息插入courses映射中
	courses.insert(make_pair("C++",2));
	courses.insert(make_pair("CSAPP", 4));
	courses.insert(make_pair("CSARCH", 4));
	courses.insert(make_pair("OS", 5));
	courses.insert(make_pair("COMPILER", 4));
	int n = 3;
	int sum = 0;
	while (n > 0) {
		string name;
		cin >> name;
		map<string, int>::iterator iter = courses.find(name);//查找课程
		if (iter == courses.end()) {
			cout << name << " is not available." << endl;
		}
		else {
			cout << iter->first << " is " << iter->second << endl;
			sum += iter->second;
			courses.erase(iter);//将刚选过的课程从映射中删除
			n--;
		}
		
	}
	cout << "Total credit: " << sum << endl;
    return 0;
}

