// 多继承举例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class A {
public:
	void setA(int);
	int showA() const;
private:
	int a;
};

class B {
public:
	void setB(int);
	int showB() const;
private:
	int b;
};
class C :public A, private B {
public:
	void setC(int, int, int);
	int showC() const;
private:
	int c;
};

void A::setA(int x) {
	a = x;
}
int A::showA() const {
	return a;
}

void B::setB(int x) {
	b = x;
}

int B::showB() const{
	return b;
}

void C::setC(int x, int y, int z) {
	setA(x); setB(y);
	c = z;
}

int C::showC() const {
	return c;
}

int main()
{
	C Obj;
	Obj.setA(5);
	cout<<Obj.showA()<<endl;
	Obj.setC(3, 4, 5);
	cout<<Obj.showC();
	//Obj.setB(3); 由于是私有继承，不能访问
	//Obj.showB();
    return 0;
}

