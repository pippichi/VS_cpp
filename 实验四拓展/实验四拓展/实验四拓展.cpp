// 实验四：人事管理.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

//定义一个Birthday类
enum Sex{ Male, Female };

class Birthday {
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
public:
	Birthday(unsigned int y, unsigned int m, unsigned int d) {
		year = y;
		month = m;
		day = d;
	}
	Birthday() = default;
	~Birthday() { cout << "析构了Birthday!" << endl; }

	void setBirthday() {
		Birthday b;
		cout << "Please input year: " << endl;
		cin >> b.year;
		while (b.year > 2018) {
			cout << "Reinput: " << endl;
			cin >> b.year;
		}
		cout << "Please input month: " << endl;
		cin >> b.month;
		while (b.month > 12) {
			cout << "Reinput: " << endl;
			cin >> b.month;
		}
		cout << "Please input day: " << endl;
		cin >> b.day;
		if (b.month == 2) {

			while (b.day > 29) {
				cout << "Reinput: " << endl;
				cin >> b.day;
			}
		}
		else {
			while (b.day > 31) {
				cout << "Reinput: " << endl;
				cin >> b.day;
			}
		}
	}
	unsigned int getYear() { return year; }
	unsigned int getMonth() { return month; }
	unsigned int getDay() { return day; }
};


class PEOPLE {
private:
	char* number[7];
	enum Sex sex;
	char* id[18];
	Birthday b;

public:
	PEOPLE(Sex s, Birthday x, char* n, char* c) :sex(s) {

		b = x;
	    id[18] = n;		
		number[7] = c;
		cout << "构造了一个PEOPLE！" << endl;
	}
	PEOPLE(PEOPLE &p) {
		sex = p.sex;
		b = p.b;
		*number = p.number[7];
		*id = p.id[18];

	}
	PEOPLE() = default;
	~PEOPLE() { cout << "析构了一个PEOPLE!" << endl; }

	Sex getSex() const { return sex; }
	char *getNumber() { return *number; }
	char *getId() { return *id; }

	inline void setSex(Sex s) { sex = s; }
	void setId() {
		char *itId[18];
		cout << "请输入18位身份证：" << endl;
		cin >> itId[18];
		while(sizeof(itId)/sizeof(char)!=18){
		cout << "错误！请重新输入：" << endl;
		cin >> itId[18];
		}



		/*int i=0;
		while (itId > 0) {
		itId / 10;
		i++;
		}
		if(i != 18) {
		cout << "错误！请重新输入：" << endl;
		cin >> itId;
		}*/
		*id = itId[18];

	}
	void setNumber(char *itNum) { *number = itNum; }

	void showId() { cout << "Id:" << id << endl; }
	void showNum() { cout << "Number:" << number << endl; }
	void showSex() {
		switch (sex) {
		case 0:
			cout << "Sex:Male" << endl;
			break;
		case 1:
			cout << "Sex:Female" << endl;
			break;
		}
	}
	void showBirthday() {
		cout << "Birthday : "
			<< b.getYear() << "/"
			<< b.getMonth() << "/"
			<< b.getDay() << endl;
	}
};

int main()
{
	Birthday birthday(1998, 2, 3);
	Birthday my_bir(1997, 2, 7);
	PEOPLE me(Male, my_bir, "160000", "33900599802031616");
	PEOPLE myWife(Female, birthday, "130000", "33900199802021111");
	myWife.setId();
	cout << "my wife's message:" << endl;
	myWife.showSex();
	myWife.showId();
	myWife.showNum();
	myWife.showBirthday();


	me.setId();
	cout << "qyf's message:" << endl;
	me.showSex();
	me.showId();
	me.showNum();
	me.showBirthday();
	return 0;
}
