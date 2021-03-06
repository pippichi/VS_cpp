// 读一个文件并显示出其中0元素的位置.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int Arr[] = {0,1,2,3,0,4};//一个元素占四位
	ofstream os("integers", ios_base::out | ios_base::binary);
	os.write(reinterpret_cast<char*>(&Arr), sizeof(Arr));
	os.close();

	ifstream file("integers", ios_base::in | ios_base::binary);
	if (file) {
		while (file) {//读到文件尾file为0
			streampos here = file.tellg();//streampos类似标记，可能是 long int 型， 可能是 long long int 型,  涉及到双字节文件流时，它也是整型，但数值 1 却要走 2 字节。
			int v;
			file.read(reinterpret_cast<char*>(&v), sizeof(int));
			if (file&&v == 0) {//表示文件没有结束 && v==0
				cout << "Position " << here/4+1 << " is 0" << endl;
			}
		}
	}
	else {
		cout << "ERROR:Cannot open file 'integers'." << endl;
	}
	file.close();
    return 0;
}

