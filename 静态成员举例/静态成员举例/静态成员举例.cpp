// 静态成员举例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class Point { //Point类定义
public:        //外部接口
	Point(int x = 0, int y = 0) :x(x), y(y) {//构造函数
		count++;//在构造函数中对count累加，所有对象共同维护同一个count
	}
	Point(Point &i) {//复制构造函数
		x = i.x; y = i.y; count++;
	}
	~Point() {
		count--;
	}
	int getX() { return x; }
	int getY() { return y; }



    /*void showCount() {
		cout << "Count: " << count << endl;
	}*/

	static void showCount() { cout << "Object count:" << count << endl; }
	//静态函数成员，用于访问类的静态成员（如果要访问非静态成员，要通过对象来访问）







private://私有数据成员
	int x, y;
	static int count;//静态数据成员声明，用于记录点的个数
};

int Point::count = 0;//静态数据成员定义和初始化，使用类名限定

int main()   //主函数
{


	Point::showCount();



	Point a(4, 5);
	cout << "Point A: " << a.getX() << ","<<a.getY()<<endl ;


	Point::showCount();


	//a.showCount();



	Point b(a);
	cout << "Point B: " << b.getX() << "," << b.getY()<<endl ;


	Point::showCount();


	//b.showCount();



    return 0;
}

