// 公有继承.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
	Rectangle rect;
	rect.initRectangle(2, 3, 20, 10);
	rect.move(3, 2);
	rect.move(1, 1);
	cout << "The data of rect(x,y,w,h) " << endl;
	cout << rect.getX() << "," <<
		rect.getY() << "," <<
		rect.getW() << "," <<
		rect.getH()<< endl;
    return 0;
}

