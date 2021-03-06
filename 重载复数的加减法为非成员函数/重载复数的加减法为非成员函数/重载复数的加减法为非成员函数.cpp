// 重载复数的加减法为非成员函数.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Complex {
public:
	Complex(double i = 0.0, double j = 0.0) :real(i), imag(j) { }
	friend Complex operator+(const Complex &c1, const Complex &c2);
	friend Complex operator-(const Complex &c1, const Complex &c2);
	friend ostream &operator <<(ostream &out, const Complex &c);

private:
	double real, imag;
};

Complex operator+(const Complex &c1, const Complex &c2) {
	return Complex(c1.real+c2.real, c1.imag+c2.imag);
}
Complex operator-(const Complex &c1, const Complex &c2) {
	return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

ostream &operator <<(ostream &out,const Complex &c) {
	out << "(" << c.real << "," << c.imag << ")" << endl;
	return out;
}

int main()
{
	Complex c(2, 5), c1(3, 10), c2;
	cout << "c= " << c << endl;
	cout << "c1= " << c1 << endl;
	c2 = c + c1;
	cout << "c2=c+c1= " << c2 << endl;
	c2 = 4 - c1;
	cout << "c2=c-c1= " << c2 << endl;
    return 0;
}

