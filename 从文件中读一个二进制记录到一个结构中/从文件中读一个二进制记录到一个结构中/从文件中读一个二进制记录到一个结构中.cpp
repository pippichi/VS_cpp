// 从文件中读一个二进制记录到一个结构中.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct Salary {
	unsigned id;
	double salary;
};

int main()
{
	Salary employee1 = { 600001,8000 };
	//创建输出流对象os把它与当前文件夹下的payroll文件向结合起来
	ofstream os("payroll", ios_base::out | ios_base::binary);//binary：以二进制形式输出
	//由于write函数需要一个字符指针，因此将employee1临时转换成一个字符指针
	os.write(reinterpret_cast<char*>(&employee1), sizeof(employee1));
	os.close();

	ifstream is("payroll", ios_base::in | ios_base::binary);
	if (is) {
		Salary employee2;
		is.read(reinterpret_cast<char*>(&employee2), sizeof(employee2));
		cout << employee2.id << " " << employee2.salary << endl;
	}
	else {
		cout << "ERROR:Cannot open file 'payroll'." << endl;
	}
	is.close();
    return 0;
}

