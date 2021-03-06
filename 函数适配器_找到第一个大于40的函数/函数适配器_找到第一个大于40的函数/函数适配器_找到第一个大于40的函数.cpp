// 函数适配器_找到第一个大于40的函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	int intArr[] = { 50,45,10,40,70,50,20,80 };
	const int N = sizeof(intArr) / sizeof(int);
	vector<int> b(intArr, intArr + N);
	//less/greater()是二元谓词，用bind1st绑定了70后，“bind1st(less<int>(), 70)”就变为一元谓词
	vector<int>::iterator iter = find_if(b.begin(),b.end(), bind1st(less<int>(), 70));//bind1st指"70"绑定为第一个参数，同理bind2nd表示"70"绑定为第二个参数;由于是less()——70 < value;如果是greater()——70 > value
	if (iter == b.end()) {
		cout << "no elements greater than 40" << endl;
	}
	else {
		cout << "first element greater than 40 is: " << *iter << endl;
	}
    return 0;
}

