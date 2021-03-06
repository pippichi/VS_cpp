// 列表容器的splice操作.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iterator>
#include<list>
using namespace std;


int main()
{
	string names1[] = { "Alice","Ben","Jack","Qyf" };
	string names2[] = { "Apple","Orange","Food","Komatsu nana" };
	//用names1数据构造s1
	list<string>s1 (names1, names1 + 4);
	//用names2数据构造s2
	list<string>s2 (names2, names2 + 4);
	//将s1开头元素放到s2最后
	s2.splice(s2.end(), s1, s1.begin());
	list<string>::iterator iter1 = s1.begin();
	advance(iter1, 2);//iter1前进2个元素，指向s1第三个元素
	list<string>::iterator iter2 = s2.begin();
	++iter2;
	list<string>::iterator iter3 = iter2;
	advance(iter3, 2);//iter3前进2个元素，指向s2第四个元素

	s1.splice(iter1, s2, iter2, iter3);//将s2的[iter2,iter3)的部分连接到s1的iter1所指向值的后面

	copy(s1.begin(), s1.end(), ostream_iterator<string>(cout, " "));
	cout << endl;
	copy(s2.begin(), s2.end(), ostream_iterator<string>(cout, " "));
	cout << endl;

    return 0;
}
