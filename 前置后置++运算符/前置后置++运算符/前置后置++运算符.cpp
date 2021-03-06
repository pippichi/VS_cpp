// 前置后置++运算符.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Clock {
public:
	Clock(int hour = 0, int minite = 0, int second = 0);
	void showTime() const;
	Clock & operator ++();//前置++
	Clock operator ++(int);//后置++

private:
	int hour, minite, second;
};

Clock::Clock(int hour, int minite, int second) {
	if (hour >= 0 && hour < 24 && minite >= 0 && minite < 60 && second >= 0 && second < 60) {
		this->hour = hour;
		this->minite = minite;
		this->second = second;
	}
	else {
		cout << "error!" << endl;
	}
}

void Clock::showTime() const {
	cout << hour << " : " << minite << " : " << second << endl;
}

Clock& Clock::operator++() {
	second++;
	if (second >= 60) {
		second -= 60; minite++;
		if (minite >= 60) {
			minite -= 60; hour = (hour + 1) % 24;
		}
	}
	return *this;
}

Clock Clock::operator ++(int) {
	Clock old = *this;
	++(*this);
	return old;
}
int main()
{
	Clock myClock(23, 59, 59);
	cout << "First time output: ";
	myClock.showTime();
	cout << "后置++后的时间：";
	(myClock++).showTime();
	cout << "前置++后的时间：";
	(++myClock).showTime();
	return 0;
}



