// HanoiTower.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "HanoiTower.h"

using namespace std;

int main()
{
	HanoiTower hanoiTower;
	int num;
	cout << "Enter the number of discs: ";
	cin >> num;
	cout << endl;
	hanoiTower.Move(num, 1, 3, 2);
	system("PAUSE");
	return 0;
}

void HanoiTower::Move(int count, int t1, int t3, int t2) 
{
	if (count > 0)
	{
		Move(count - 1, t1, t2, t3);
		cout << "Moved disc " << count << " from " << t1 << " to " << t3 << "." << endl;
		Move(count - 1, t2, t3, t1);
	}
}

