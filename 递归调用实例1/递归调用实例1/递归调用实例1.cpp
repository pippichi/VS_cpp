// 递归调用实例1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int comm(int n, int k) {
	if (k > n) {
		return 0;
	}
	else if (n == k || k == 0) {
		return 1;
	}
	else {
		return comm(n - 1, k - 1) + comm(n - 1, k);
	}
}
int main()
{
	int n, k;
	cout << "input two digis: \n";
	cin >> n >> k;
	cout << "组合数：" << comm(n, k)<<endl;
    return 0;
}

