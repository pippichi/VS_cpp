// 对象与类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Clock {
public:
	Clock(int Hour, int Min, int Sec);
	Clock();//构造函数
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
Clock::Clock() :hour(0), minute(0), second(0) {
}
Clock::Clock(int Hour, int Min, int Sec) :
	hour(Hour), minute(Min), second(Sec) {
}
void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}
int main()
{
	Clock myClock(0,2,0);
	myClock.setTime(12, 25, 31);
	myClock.showTime();
	Clock c2;
	c2.showTime();
    return 0;
}

