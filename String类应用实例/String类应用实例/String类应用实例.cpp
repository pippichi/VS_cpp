// String类应用实例.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

inline void test(const char* title,bool value) {
	cout << title << " return " << (value ? "true" : "false") << endl;
}

int main()
{
	string s1 = "DEF";
	string s2;
	cout << "Enter string s2"<<endl;
	
	
	//cin >> s2;

	getline(cin, s2, ',');
	cout << "length of s2: "<<s2.length()<<endl;

	test("s1 <= \"ABC\"", s1 <= "ABC");
	test("\"DEF\" <= s1", "DEF" <= s1);

	s2 += s1;
	cout << "s2= " << s2 << endl;
	cout << "length of s2: " << s2.length();
    return 0;
}

