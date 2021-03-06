// 使用复制构造.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class intNum {
	int* xptr;
public:
	intNum(int x=0): xptr(new int(x)){//构造函数
		cout << "calling constructor" << endl;
	}
	intNum(const intNum & n) :xptr(new int(*n.xptr)) {//深层构造函数
		cout << "calling copy constuctor" << endl;
	}
	~intNum() {
		delete xptr;
		cout << "Destructor" << endl;
	}
	int getInt() { return *xptr; }

};
intNum getNum() {
	intNum a;
	return a;
}
int main()
{
	cout << getNum().getInt() << endl;
    return 0;
}

