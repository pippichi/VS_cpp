// 动态数组类模板程序.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include"appay.h"
using namespace std;

/*void read(int *p,int n) {
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
}*/
int main()
{
	Array<int> a(10);
	//read(a, 10);
	int n, count=0;
	cout << "Enter a value >= 2 as upper limit for prime numbers: " ;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		bool isPrime = true;
		for (int j = 0; i < count; j++) {
			if (i%a[j] == 0) {
				isPrime = false; break;
			}
		}
		if (isPrime) {
			if (count == a.getSize()) {
				a.resize(count * 2);
			}
			a[count++] = i;
		}
	}
	for (int i = 0; i < count; i++) {
		cout << setw(8) << a[i];
		
	}
	cout << endl;
    return 0;
}

