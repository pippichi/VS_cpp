// 栈类模板.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<sstream>
#include<cmath>
#include"stack.h"
#include"calculator.h"
using namespace std;

inline double stringToDouble(const string &str) {
	istringstream stream(str);
	double result;
	stream >> result;
	return result;
}

void Calculator::enter(double num) {
	s.push(num);
}

bool Calculator::getTwoOperands(double &oper1, double &oper2) {
	if (s.isEmpty()) {//检查栈是否为空
		cerr << "Missing operand!" << endl;
		return false;
	}
	oper1 = s.pop();//操作数弹出栈
	if (s.isEmpty()) {
		cerr << "Missing operand!" << endl;
		return false;
	}
	oper2 = s.pop();//操作数弹出栈
	return true;
}

void Calculator::compute(char op) {
	double operand1, operand2;
	bool result = getTwoOperands(operand1, operand2);
	if (result) {
		switch (op) {
		case'+':s.push(operand2 + operand1); break;
		case'-':s.push(operand2 - operand1); break;
		case'*':s.push(operand2 * operand1); break;
		case'/':
			if (operand1 == 0) {
				cerr << "Divided by 0" << endl;
				s.clear();
			}
			else
				s.push(operand2 / operand1); break;
		case'^':s.push(pow(operand2, operand1)); break;
		default:cerr << "Urecognized operator" << endl;
			break;
		}
		cout << " = " << s.peek() << " ";
	}
	else
		s.clear();
}

void Calculator::run() {
	string str;
	while (cin >> str, str != "q") {
		switch (str[0]) {
		case'c':s.clear(); break;
	    case '-'://需要判断遇到的是负号还是减号
			if (str.size() > 1) {
				enter(stringToDouble(str));
			}
			else {
				compute(str[0]); break;
			}
		case'+':
		case'*':
		case'/':
		case'^':
			compute(str[0]); break;
		default:
			enter(stringToDouble(str)); break;

		}
	}
}

void Calculator::clear() {
	s.clear();
}

int main()
{
	Calculator c;
	c.run();
    return 0;
}

