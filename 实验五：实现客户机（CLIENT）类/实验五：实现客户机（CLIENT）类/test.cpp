// 实验五：实现客户机（CLIENT）类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"client.h"
using namespace std;

int Client::ClientNum = 0;
char Client::ServerName = 'a';

int main()
{
	Client c1;
	c1.ChangeServerName('c');
	cout << c1.getClientNum() << endl;
	Client c2;
	c2.ChangeServerName('b');
	cout << Client::getClientNum() << endl;


    return 0;
}

