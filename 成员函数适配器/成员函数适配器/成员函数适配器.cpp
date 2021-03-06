// 成员函数适配器.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
using namespace rel_ops;//rel_ops可以将utility中通过一组函数模板对任意数据类型重载">="">""<=""!="运算符，前三个运算符均被转化为对"<"的调用，最后一个被转化为对"=="的调用。而这个函数模板在std::rel_ops命名空间内，在试用前用using namespace rel_ops事先声明

struct Car{
	int id;
	Car(int id) { this->id = id; }
	void display() const { cout << "car" << id << endl; }
};

int main()
{
	vector<Car *>pcars;
	vector<Car>cars;
	for (int i = 0; i < 5; i++)
		pcars.push_back(new Car(i));
	for (int i = 5; i < 10; i++)
		cars.push_back(Car(i));
	cout << "elements in pcars: " << endl;
	//通过mem_fun()将成员函数适配成普通函数，它的需要的参数是对象的指针
	for_each(pcars.begin(), pcars.end(), mem_fun(&Car::display));//for_each模板输出从第一个迭代器指向元素到第二个迭代器指向元素通过第三个函数对象作用之后的信息
	cout << endl;
	cout << "elements in cars: " << endl;
	//通过mem_fun()将成员函数适配成普通函数，它的需要的参数是对象的引用
	for_each(cars.begin(), cars.end(), mem_fun_ref(&Car::display));
	cout << endl;

	for (size_t i = 0; i < pcars.size(); ++i)
		delete pcars[i];
    return 0;
}

