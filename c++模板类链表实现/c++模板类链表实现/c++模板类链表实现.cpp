// c++模板类链表实现.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"LinkList.h"
#include"LinkList.cpp"
using namespace std;
int main()
{
	LinkList<int> link;
	for (int i = 10; i > 0; i--) {
		link.rearAdd(i);
	}
	link.print();
	cout << link.size() << endl;
	LinkList<int> link1(link);
	link1 = link;
	link1.print();
	link1.deleteNElement(100);
	link1.modifyElement(5, 100);
	link1.insertNElement(3, 100);
	cout << link1.size() << endl;
	link1.print();
	link1.sort();
	link1.print();
	link1.destory();
	cout << link1.size() << endl;
	system("pause");
    return 0;
}

