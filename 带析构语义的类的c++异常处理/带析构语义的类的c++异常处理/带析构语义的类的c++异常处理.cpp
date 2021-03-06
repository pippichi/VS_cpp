// 带析构语义的类的c++异常处理.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class MyException {
	string message;
public:
	MyException(const string&message):message(message){}
	~MyException() {}
	const string &getMessage()const { return message; }
};

class Demo {
public:
	Demo() { cout << "Construtor of Demo" << endl; }
	~Demo() { cout << "Destructor of Demo" << endl; }
};

void func()throw(MyException) {
	Demo d;
	cout << "Throw MyException in func()" << endl;
	throw MyException("execption thrown by func()");
}

int main()
{
	cout << "In main function" << endl;
	try {
		func();
	}
	catch (MyException &e) {
		cout << "Caught an exception: " << e.getMessage() << endl;
	}
	cout << "Resume the execution of main" << endl;
    return 0;
}

