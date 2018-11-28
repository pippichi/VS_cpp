// 钟.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;


class Clock {
public:
	void setTime(int Hour = 0, int Min = 0, int Sec = 0);
	void showTime();
private:
	int hour, minute, second;
};
void Clock::setTime(int Hour, int Min, int Sec) {
	hour = Hour;
	minute = Min;
	second = Sec;
}
void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

