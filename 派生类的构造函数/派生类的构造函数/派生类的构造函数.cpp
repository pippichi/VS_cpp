// 派生类的构造函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class B {
public:
	B();
	B(const B &b);
	B(int i);
	~B();
	void print() const;
private:
	int b;
};
B::B() {
	b = 0;
	cout << "default constructor called" << endl;
}
B::B(const B&b) {};
B::B(int i) {
	b = i;
	cout << "constructor called" << endl;
}
B::~B() {
	cout << "deconstructor called" << endl;
}
void B::print() const {

	cout << b << endl;
}

class C :public B {
public:
	C();
	C(const C&c);
	C(int i, int j);
	~C();
	void print() const;
private:
	int c;
};
C::C() {
	c = 0;
	cout << "defaultconstructor called" << endl;
}

C::C(const C &c):B(c) {}                //复制构造函数

C::C(int i, int j) :B(i), c(j) {
	cout << "constructor called" << endl;
}
C::~C() {
	cout << "deconstructor called" << endl;
}
void C::print() const {
	B::print();
	cout << c << endl;
}
int main()
{
	C obj(5, 6);
	obj.print();
    return 0;
}

