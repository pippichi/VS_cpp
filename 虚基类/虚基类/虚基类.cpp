// 虚基类.cpp: 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include<iostream>
using namespace std;

class Base0 {
public:
	Base0(int Var) :Var0(Var) {}
	int Var0;
	void fun0() { cout << "Base0 called" << endl; }
};

class Base1 :virtual public Base0 {//虚基类
public:
	Base1(int Var) :Base0(Var) {}
	int Var1;
};
class Base2 :virtual public Base0 {//虚基类
public:
	Base2(int Var) :Base0(Var) {}
	int Var2;
};
class Derived :public Base1, public Base2 {
public:
	Derived(int Var) :Base0(Var), Base1(Var), Base2(Var) {}
	int Var;
	void fun() {
		cout << "Derived" << endl;
	}
};
int main()
{
	Derived d(1);
	d.Base1::Var0 = 2;
	d.Base1::fun0();
	d.Base2::Var0 = 3;
	d.Base2::fun0();
	d.Var0 = 2;//直接调用基类Var0
	d.fun();
	d.fun0();//使用虚基类后就能用这个函数调用
	return 0;
}

