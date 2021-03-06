// 实验四：人事管理.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

//定义一个Birthday类
enum Sex {Male,Female};

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
	unsigned int number;
	enum Sex sex;
	unsigned long long id;
	Birthday b;

public:
	PEOPLE(Sex s, Birthday x, unsigned int n, unsigned long long i) :sex(s) {

		b = x;
		number = n;
		id = i;

		cout << "构造了一个PEOPLE！" << endl;
	}
	PEOPLE(PEOPLE &p) {
		sex = p.sex;
		number = p.number;
		id = p.id;

	}
	PEOPLE() = default;
	~PEOPLE() { cout << "析构了一个PEOPLE!" << endl; }

	Sex getSex() const { return sex; }
	unsigned int getNumber() { return number; }
	unsigned long long getId() { return id; }

	inline void setSex(Sex s) { sex = s; }
	void setId() {
	    long long itId;
		cout << "请输入18位身份证：" << endl;
		cin >> itId;
		/*while(itId/1e17==0 && itId/1e18!=0){
			cout << "错误！请重新输入：" << endl;
			cin >> itId;
		}*/



		/*int i=0;
		while (itId > 0) {
			itId / 10;
			i++;
		}
		if(i != 18) {
			cout << "错误！请重新输入：" << endl;
			cin >> itId;
		}*/
		id = itId;

	}
	void setNumber(int itNum) { number = itNum; }

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
		cout<<"Birthday : " 
			<<b.getYear() << "/" 
			<<b.getMonth() <<"/"
			<<b.getDay()<<endl;
	}
};

int main()
{
	Birthday birthday(1998,2,3);
	Birthday my_bir(1997,2,7);
	PEOPLE me(Male,my_bir,16,339005199802031616);
	PEOPLE myWife(Female, birthday, 13, 339005199802021111);
	myWife.setId();
	cout << "my wife's message:" << endl;
	myWife.showSex();
	myWife.showId();
	myWife.showNum();
	myWife.showBirthday();


	me.setId();
	cout<<"qyf's message:"<<endl;
	me.showSex();
	me.showId();
	me.showNum();
	me.showBirthday();
    return 0;
}

