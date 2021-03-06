// 实验四：定义控制台应用程序入口点.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//构造一个简易的CPU。
enum CPU_RANK {P1=1,P2,P3,P4,P5,P6,P7};
class CPU {
private:
	int frequency;
	float voltage;
	CPU_RANK rank;

public:
	CPU(CPU_RANK r, int f, float v) :rank(r),frequency(f),voltage(v){
		cout << "构造了一个CPU!" << endl;
	}

	//复制构造CPU.
	CPU(CPU &c) {
		rank = c.rank;
		voltage = c.voltage;
		frequency = c.frequency;
	}

	CPU() = default;
	~CPU() { cout << "析构了一个CPU!" << endl; }
	CPU_RANK getRank() const { return rank; }
	int getFrequency() const { return frequency; }
	float getVoltage() const { return voltage; }

	//修改CPU中的属性值。
	void setRank(CPU_RANK r) { rank = r; }
	void setFrequency(int f) { frequency = f; }
	void setVoltage(float v) { voltage = v; }

	void run() { cout << "CPU开始运行！" << endl; }
	void stop() { cout << "CPU停止运行！" << endl; }
};

//构造一个简易的RAM。
enum RAM_TYPE { DDR2 = 2, DDR3, DDR4 };
class RAM {
private:
	enum RAM_TYPE type;
	unsigned int frequency;
	unsigned int size;

public:
	RAM(RAM_TYPE t, unsigned int f, unsigned int s) {
		type = t;
		frequency = f;
		size = s;
		cout << "构造了一个RAM" << endl;
	}

	//复制构造RAM
	RAM(RAM &r) {
		type = r.type;
		frequency = r.frequency;
		size = r.size;
	}

	RAM() = default;
	~RAM() {
		cout << "析构了一个RAM!" << endl;
	}
	RAM_TYPE getType() { return type; }
	unsigned int getFrequency() const { return frequency; }
	unsigned int getSize() const { return size; }

	//修改RAM中的属性值。
	void setType(RAM_TYPE t) { type = t; }
	void setFrequency(unsigned int f) { frequency = f; }
	void setSize(unsigned int s) { size = s; }

	void run() { cout << "开始运行一个RAM!" << endl; }
	void stop() { cout << "结束运行一个RAM!" << endl; }
};
//构造一个简易的CDROM。
enum CDROM_Interface {SATA,USB};
enum CDROM_Install_type {external,built_in};
class CD_ROM {
private:
	enum CDROM_Interface interface_type;
	unsigned int cache_size;
	CDROM_Install_type install_type;

public:
	CD_ROM(CDROM_Interface i, unsigned int c, CDROM_Install_type n) {
		interface_type = i;
		cache_size = c;
		install_type = n;
		cout << "构造了一个CDROM!" << endl;
	}

	//复制构造CD_ROM
	CD_ROM(CD_ROM &cr) {
		interface_type = cr.interface_type;
		cache_size = cr.cache_size;
		install_type = cr.install_type;
	}

	CD_ROM() = default;
	~CD_ROM() {
		cout << "析构了一个CDROM!" << endl;
	}
	CDROM_Interface getInterface() const { return interface_type; }
	CDROM_Install_type getInstallType() const { return install_type; }
	unsigned int getCacheSize() const { return cache_size; }
	
	//修改CDROM中的属性值。
	void setInterface(CDROM_Interface i) { interface_type = i; }  
	void setInstallType(CDROM_Install_type n) { install_type = n; }
	void setCacheSize(unsigned int c) { cache_size = c; }

	void run() { cout << "CDROM开始运行！" << endl; }
	void stop() { cout << "CDROM停止运行！" << endl; }

};

//定义一个Computer类
class Computer {
private:
	CPU myCPU;
	RAM myRAM;
	CD_ROM myCDROM;
	unsigned int shortage_size;//GB
	unsigned int bandwidth;//MB

public:
	Computer(CPU c, RAM r, CD_ROM cr, unsigned int ss, unsigned int b);

	~Computer() { cout << "析构了一个Computer!" << endl; }

	void RUN() {
		myCPU.run();
		myRAM.run();
		myCDROM.run();
		cout << "Computer开始运行！" << endl;
	}
	void STOP() {
		myCPU.stop();
		myRAM.stop();
		myCDROM.stop();
		cout << "Computer停止运行！" << endl;
	}
};
Computer::Computer(CPU z, RAM x, CD_ROM c, unsigned int v, unsigned int b) :myCPU(z), myRAM(x), myCDROM(c)
 {
	shortage_size = v;
    bandwidth = b;

	cout << "构造了一个Computer!" << endl;
}

int main()
{
	CPU a(P6, 300, 2.8);
	a.run();
	cout<<a.getRank()<<endl;
	a.stop();
	cout << "******************\n" << endl;


	RAM b(DDR3, 1600, 8);
	b.run();
	b.stop();
	cout << "*******************\n" << endl;

	CD_ROM c(SATA, 2, built_in);
	c.run();
	c.stop();
	cout << "***************\n" << endl;

	Computer my_Computer(a, b, c, 128, 10);
	cout << "**************\n" << endl;

	my_Computer.RUN();
	my_Computer.STOP();
	cout << "***************\n" << endl;

	return 0;
}

