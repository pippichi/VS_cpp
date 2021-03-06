// 综合实验：银行本利计算.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
#include"account.h"
using namespace std;

int main()
{
	Date date(2008, 1, 1);
	//建立几个账户
	savingsAccount accounts[] = {
		savingsAccount(date, "21222341", 0.015),
		savingsAccount(date, "23332321", 0.012)
	};
	const int n = sizeof(accounts) / sizeof(savingsAccount);

	accounts[0].deposit(Date(2008,5,8), 20000,"salary");
	accounts[1].deposit(Date(2008,7,2), 10000,"sell stock 0323");
	accounts[0].deposit(Date(2009,1,1),25000,"salary");
	accounts[1].withdraw(Date(2008,12,12), 115000,"buy a laptop");

	//开账之后第90天到了银行计息日，计算所有账户年息
	cout << endl;
	for (int i = 0; i < n; i++) {
		accounts[i].settle(Date(2010, 1, 1));
		accounts[i].show();
		cout << endl;

	}
	cout << "Total: " << savingsAccount::getTotal() << endl;
    return 0;
}

