// 10-16从大到小排序_greater.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<iterator>
using namespace std;

int main()
{
	int intArr[] = { 30,90,10,40,70,50,20,80 };
	const int N = sizeof(intArr) / sizeof(int);
	vector<int> a(intArr, intArr + N);
	cout << "before sorting: " << endl;
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;

	sort(a.begin(), a.end(), greater<int>());//greater()是从大到小，less()是从小到大

	cout << "after sorting: " << endl;
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;
    return 0;
}

