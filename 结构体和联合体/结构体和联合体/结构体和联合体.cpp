// 结构体和联合体.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class ExamInFo {
private:
	string name;
	enum {PERCENTAGE,GRADE,PASS}mode;
	union {
		int percent;
		char grade;
		bool pass;
	};
public:
	void show();
	ExamInFo(string name, int percent) :name(name), mode(PERCENTAGE),percent(percent) {}
	ExamInFo(string name, char grade) :name(name), mode(GRADE),grade(grade) {}
	ExamInFo(string name, bool pass) :name(name), mode(PASS),pass(pass) {}

};

void ExamInFo::show() {
	switch (mode)
	{
	case 0: cout <<name<<": "<< percent; break;
	case 1:cout <<name<< ": "<<grade; break;
	case 2:cout <<name<<": "<< (pass ? "PASS" : "FAIL"); break;
	}
	cout << endl;
}
int main()
{
	ExamInFo course1("English", false);
	ExamInFo course2("Math", 85);
	ExamInFo course3("Chinese", 'A');
	course1.show();
	course2.show();
	course3.show();
    return 0;
}

