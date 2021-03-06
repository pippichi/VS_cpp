// 虚函数实现运行时多态.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Base0 {
public:
	virtual void display() const;
};
void Base0::display()const {
	cout << "Base0" << endl;
}
class Base1 :public Base0 {
public:
	virtual void display() const;
};
void Base1::display()const {
	cout << "Base1" << endl;
}
class Drived :public Base1 {
public:
	virtual void display()const;
};
void Drived::display()const {
	cout << "Drived" << endl;
}
void fun(Base0 *ptr) {
	ptr->display();
}
int main()
{
	Base0 b0;
	Base1 b1;
	Drived d0;
	fun(&b0);
	fun(&b1);
	fun(&d0);
    return 0;
}

