// 二义性问题.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Base0 {
public:
	int Var0();
	void fun0() { cout << "Base0 called" << endl; }
};

class Base1 :public Base0{
public:
	int Var1;
};
class Base2 :public Base0{
public:
	int Var2;
};
class Derived :public Base1, public Base2 {
public:
	int Var;
	void fun() {
		cout << "Derived" << endl;
	}
};
int main()
{
	Derived d;
	d.Base1::Var0 = 2;
	d.Base1::fun0();
	d.Base2::Var0 = 3;
	d.Base2::fun0();
	d.fun();
    return 0;
}

