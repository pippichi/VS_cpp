// 虚析构函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Base {
public:
	virtual ~Base();
};
Base::~Base() {
	cout << "deconstructor called" << endl;
}
class Derived :public Base{
public:
	Derived();
	virtual~Derived();
private:
	int* p;
};
Derived::Derived() {
	p = new int(0);
}
Derived::~Derived() {
	cout << "Derived called" << endl;
	delete p;
}
void fun(Base *p) {
	delete p;
}
int main()
{
	Base *b = new Derived();
	fun(b);
    return 0;
}

