// 类型转换规则举例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Base1 {
public:
	void display() const { cout << "Base1::display(): " << endl; }
};
class Base2 :public Base1  {
public:
	void dispaly() const {
		cout << "Base2::dispaly(): " << endl;
	}
};
class Drived :public Base2 {
public :
	void display() const {
		cout << "Drived::display()" << endl;
	}
};
void fun(Base1 *ptr) {
	ptr->display();
}
int main()
{
	Base1 base1;
	Base2 base2;
	Drived drived;

	fun(&base1);
	fun(&base2);
	fun(&drived);
    return 0;
}

