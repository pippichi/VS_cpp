// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct MyTimeStruct {

	unsigned int year;
	unsigned int month;
	unsigned int day;
	unsigned int hour;
	unsigned int min;
	unsigned int sec;
};
enum Day {};
int main() {
	MyTimeStruct myTime = { 1998, 2, 3, 11, 11, 11 };
	cout << "Please input year: " << endl;
	cin >> myTime.year;
	while (myTime.year > 2018) {
		cout << "Reinput: " << endl;
		cin >> myTime.year;
	}
	cout << "Please input month: " << endl;
	cin >> myTime.month;
	while (myTime.month > 12) {
		cout << "Reinput: " << endl;
		cin >> myTime.month;
	}
	cout << "Please input day: " << endl;
	cin >> myTime.day;
	if (myTime.month == 2) {

		while (myTime.day > 29) {
			cout << "Reinput: " << endl;
			cin >> myTime.day;
		}
	}
	else{
		while (myTime.day > 31) {
			cout << "Reinput: " << endl;
			cin >> myTime.day;
		}
	}
	cout << "Please input hour: " << endl;
	cin >> myTime.hour;
	while (myTime.hour > 24) {
		cout << "Reinput: " << endl;
		cin >> myTime.hour;
	}
	cout << "Please input min: " << endl;
	cin >> myTime.min;
	while (myTime.min > 60) {
		cout << "Reinput: " << endl;
		cin >> myTime.min;
	}
	cout << "Please input second: " << endl;
	cin >> myTime.sec;
	while (myTime.sec > 60) {
		cout << "Reinput: " << endl;
		cin >> myTime.hour;
	}
	cout << "The time is set to: " 
		<< myTime.year << "/"
		<< myTime.month << "/"
		<< myTime.day << " "
		<< myTime.hour << ":"
		<< myTime.min << ":"
		<< myTime.sec << endl;

	return 0;
}
