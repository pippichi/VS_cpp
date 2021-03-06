// hanoi移动盘子攻略.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int x = 0;

void move(char src, char dest) {
	cout << src << "----->" << dest<<endl;	
}
void hanoi(int n, char src, char middle, char dest) {
	if (n == 1) {
		move(src, dest);
		x++;
	}
	else {
		hanoi(n - 1, src, dest,middle);
		move(src, dest);
		x++;
		hanoi(n - 1, middle, src, dest);
	}
}

int main()
{
	int i;
	for (int i = 0; i < 99999; i++) {
		cout << "输入盘子数量：";
		cin >> i;
		//cout << "The steps of moving " << i << " diskes is:" << endl;
		hanoi(i, 'A', 'B', 'C');
		cout << "x: " << x << endl;
		x = 0;
	}
    return 0;
}

