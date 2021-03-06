// 顺序容器的基本功能.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<list>
#include<deque>
#include<iterator>
#include<algorithm>
using namespace std;

template<class T>
void printContainer(const char* mage, const T& list) {
	cout << mage << " : ";
	copy(list.begin(), list.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

int main()
{
	deque<int> s;
	for (int i = 0; i < 10; i++) {
		int x;
		cin >> x;
		s.push_front(x);
	}
	printContainer("deque at first", s);

	list<int> l(s.rbegin(), s.rend());
	printContainer("list at first", l);

	list<int>::iterator iter = l.begin();
	while (iter != l.end()) {
		int v = *iter;
		l.erase(iter);
		l.insert(++iter, v);
	}
	printContainer("list at last", l);

	//容器l的内容赋值给s，再输出
	s.assign(l.begin(), l.end());
	printContainer("deque at last", s);
    return 0;
}

