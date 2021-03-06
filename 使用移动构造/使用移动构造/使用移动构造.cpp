// 使用移动构造.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class intNum {
private:
	int* xptr;
public:
	intNum(int x = 0) :xptr(new int(x)) { cout << "调用构造函数\n"; }//构造函数
	intNum(const intNum &n) :xptr(new int(*n.xptr)) { cout << "调用复制构造函数\n"; }//复制构造函数,对象n的xptr指针指向的数值，，，单个&可以绑定到左值
	intNum(intNum &&n) :xptr(n.xptr) {//&&是右值引用，函数返回的临时变量是右值，即将消亡的值也是右值
		n.xptr = nullptr;
		cout << "Call moving constructor" << endl;
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

