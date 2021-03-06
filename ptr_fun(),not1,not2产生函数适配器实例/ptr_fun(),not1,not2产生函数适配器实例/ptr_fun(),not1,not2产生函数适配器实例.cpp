// ptr_fun(),not1,not2产生函数适配器实例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

bool g(int x, int y) {
	return x > y;
}

int main()
{
	int intArr[] = { 30,90,10,40,70,50,20,80 };
	const int N = sizeof(intArr) / sizeof(int);
	vector<int> a(intArr, intArr + N);
	vector<int>::iterator iter;
	iter = find_if(a.begin(), a.end(), bind2nd(ptr_fun(g), 40));
	if (iter == a.end())
		cout << "not find" << endl;
	else
		cout << "first element greater than 40 is: " << *iter << endl;

	iter = find_if(a.begin(), a.end(), not1(bind2nd(greater<int>(), 40)));
	if (iter == a.end())
		cout << "not find" << endl;
	else
		cout << "first element less than 40 is: " << *iter << endl;

	iter = find_if(a.begin(), a.end(), bind2nd(not2(greater<int>()), 40));
	if (iter == a.end())
		cout << "not find" << endl;
	else
		cout << "first element less than 40 is: " << *iter << endl;
    return 0;
}

