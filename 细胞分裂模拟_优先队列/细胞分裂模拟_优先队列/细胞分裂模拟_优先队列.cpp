// 细胞分裂模拟_优先队列.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iterator>
#include<queue>
#include<time.h>
using namespace std;

const int SPLIT_TIME_MIN = 500;
const int SPLIT_TIME_MAX = 2000;

class Cell;
priority_queue<Cell> cellQueue;

class Cell {
private:
	static int count;
	int id;
	int time;//细胞诞生时间

public:
	Cell(int birth) :id(++count) {
		time = birth + (rand() % (SPLIT_TIME_MAX - SPLIT_TIME_MIN)) + SPLIT_TIME_MIN;
	}
	int getId()const { return id; }
	int getSplitTime() const{ return time; }
	bool operator <(const Cell&cell)const {
		return cell.time < time;
	}
	void split() {
		Cell child1(time), child2(time);
		cout << time << "s: Cell #" << id << " split to #"
			<< child1.getId() << " and #" << child2.getId() << endl;
		cellQueue.push(child1);
		cellQueue.push(child2);
	}//细胞分裂
};

int Cell::count = 0;

int main()
{
	srand(static_cast<unsigned>(time(0)));
	int t;//m模拟时间长度
	cout << "Simulation time: ";
	cin >> t;
	cellQueue.push(Cell(0));//将第一个细胞压入优先级队列
	while (cellQueue.top().getSplitTime() <= t) {
		cellQueue.top().split();//模拟下一次细胞的分裂
		cellQueue.pop();
	}
    return 0;
}

