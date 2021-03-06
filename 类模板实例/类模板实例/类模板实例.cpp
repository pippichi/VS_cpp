// 类模板实例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
struct student {
	int id;
	float gpa;
};
template<class T>
class Store {
private:
	T item;
	bool haveValue;
public:
	Store();
	T &getElem();
	void putElem(const T &x);
};
template<class T>
Store<T>::Store():haveValue(false) {}
template<class T>
T &Store<T>::getElem() {
	if (!haveValue) {
		cout << "No item present." << endl;
		exit(1);
	}
	return item;
}
template<class T>
void Store<T>::putElem(const T &x) {
	haveValue = true;
	item = x;
}
int main()
{
	Store<int> s1, s2;
	s1.putElem(3);
	s2.putElem(-7);
	cout << s1.getElem() << "  " << s2.getElem() << endl;

	student g = { 1000,23 };
	Store<student> s3;
	s3.putElem(g);
	cout << "The student id is: " << s3.getElem().id << " and his gpa is: "<<s3.getElem().gpa<<endl;

	Store<double> b;
	b.putElem(3.3);
	cout << b.getElem() << endl;
    return 0;
}

