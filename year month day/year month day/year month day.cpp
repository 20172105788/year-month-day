// year month day.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CDate
{
private:
	int year;
	int month;
	int day;
public:
	CDate()
	{
		int display();
		int nextday();
		year = 2018;
		month = 4;
		day = 24;
	}
	void init(int yy, int mm, int dd)
	{
		year = yy;
		month = mm;
		day = dd;
		return 0;
	}
	int CDate::display()
	{
		cout << year << "年" << month << "月" << day << "日" << endl;
		return 0;
	}
	int CDate::nextday()
	{
		int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		day++;
		if (year % 400 == 0 || year % 4 == 0 && year != 0)

	}

};

int main()
{
	int year, momth, day, x, y;
    return 0;
}

