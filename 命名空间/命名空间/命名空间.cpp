// 命名空间.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"name.h"
#include<iostream>
using namespace std;
//using namespace ns4; 错误，不能这么用
namespace ns1 {
	int i = 5;
	const int j = 7;
	static int u = 8;
}

namespace ns2 {
	static int i = 2;
	static int u = 1;
	const int j = 9;
	namespace ns3 {
		 static int i = 3;
	}
}
static int i = 2;
const int j = 3;
int main()
{
	i++;
	ns4::i++;
	cout << ns1::i;
	cout << ns1::j;
	cout << ns1::u;
	cout << ns2::i;
	cout << ns2::j;
	cout << ns2::u;
	cout << ns2::ns3::i+1;
	cout << ns2::ns3::i + 1;
	cout << ns4::i;
	cout << i << j;
    return 0;
}

