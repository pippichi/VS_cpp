// 二分法查找.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

template<class T>
void binSearch(const T list[],int n,const T &key) {
	int former = 0;
	int later = n - 1;
	while (former <= later) {
		int middle = (former + later) / 2;
		if (list[middle] == key) {
			return middle;
		}
		else if (list[middle] < key) {
			former = middle + 1;
		}
		else {
			later = middle - 1;
		}
		return -1;
	}
}

int main()
{
    return 0;
}

