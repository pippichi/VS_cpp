// STL程序实例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iterator>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;



int main()
{
	const int N = 5;
	vector<int> s(N);//容器
	for (int i = 0; i < N; i++) {
		cin >> s[i];
	}
	transform/*算法*/(s.begin()/*迭代器*/, s.end()/*迭代器*/, ostream_iterator<int>(cout, " ")/*迭代器*/, negate<int>()/*函数对象*/);
	cout << endl;
    return 0;
}

