// 抽象类举例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Base1 {
public:
	virtual void display() const = 0;//纯虚函数
};
class Base2 :public Base1 {
public:
	virtual void display()const;
};
void Base2::display()const {
	cout << "Base2 called" << endl;
}
class Drived :public Base2 {
public:
	virtual void display()const;
};
void Drived::display() const{
	cout << "Drived called" << endl;
}
void fun(Base1 *ptr) {
	ptr->display();
}
int main()
{
	Base2 b2;
	Drived d1;
	fun(&b2);
	fun(&d1);

    return 0;
}

