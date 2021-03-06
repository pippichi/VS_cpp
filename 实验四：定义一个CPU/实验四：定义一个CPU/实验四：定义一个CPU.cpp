// 实验四：定义一个CPU.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

enum CPU_RANK { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU {
public:
	CPU(int f, float v, CPU_RANK r):frequency(f) {
		//frequency = f;
		rank = r;
		voltage = v;
		cout << "构造了一个CPU函数" << endl;
	}
	~CPU() {
		cout << "析构了一个CPU函数" << endl;
	}
	void run() { cout << "CPU开始运行！" << endl; };
	void stop() { cout << "CPU结束运行！" << endl; };
	CPU_RANK getRank() const { return rank; }
	int getFrequency() const { return frequency; }
	float getVoltage() const { return voltage; }
	void setRank(CPU_RANK r) { rank = r; }
	void setFrequency(int f) { frequency = f;}
	void setVoltage(float v) { voltage = v; }
private:
	CPU_RANK rank;
	int frequency;
	float voltage;
};

int main()
{
	CPU a(300, 2.8, P2);
	a.run();
	a.stop();
	a.setFrequency(200);
	cout<<a.getFrequency()<<endl;
	cout<<a.getRank()<<endl;
	cout<<a.getVoltage()<<endl;
    return 0;
}

