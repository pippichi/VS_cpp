// 实验六（上）员工信息.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"employee.h"
#include<iostream>
using namespace std;

int main()
{
	Employee e("Qi yifeng", "Hangzhou", "311215", "Zhejiang");
	e.display();
	e.change_name("Yi feng");
	e.display();
    return 0;
}

