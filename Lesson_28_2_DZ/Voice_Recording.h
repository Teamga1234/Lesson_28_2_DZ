#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class Voice_Recording
{
protected:
	string speaker;
	int duration;
	Date recording_date;
public:
	Voice_Recording(string speaker, int duration, Date recording_date):
		speaker(speaker), duration(duration), recording_date(recording_date){}
	Voice_Recording(string speaker, int duration, int year, int month, int day):
		speaker(speaker), duration(duration), recording_date(year, month, day){}
	void showInfo()const
	{
		cout << speaker<< endl;
		cout << duration << endl;
		cout << recording_date << endl;
	}

};

