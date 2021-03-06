// 集合容器.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<set>
#include<iterator>
#include<utility>
using namespace std;

int main()
{
	set<double>s;
	while (true) {
		double v;
		cin >> v;
		if (v == 0) break;
		//尝试将v插入
		pair<set<double>::iterator, bool> r = s.insert(v);
		if (!r.second)//如果v已经存在，输出提示信息,pair找到集合中有与输入值相同的数时r.second为假，则!r.second为真，if语句继续
			cout << v << " is duplicated" << endl;
	}
	set<double>::iterator iter1 = s.begin();
	set<double>::iterator iter2 = s.end();
	double medium = (*iter1 + *(--iter2)) / 2;
	cout << " <= medium: ";
	copy(s.begin(), s.upper_bound(medium), ostream_iterator<double>(cout, " "));
	cout << endl << " >= medium: ";
	copy(s.lower_bound(medium), s.end(), ostream_iterator<double>(cout, " "));
	return 0;
}

