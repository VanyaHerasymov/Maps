#pragma once
#include "Date.h"
#include< vector>
#include <string>
#include <map>
using namespace std;
class Diary
{
	map<Date, vector<string>> book;
public:
	Diary();
	void showInfo()const;
	void addEvent(Date D, string info);
	void findByDate(Date D);
	void finByEvent(string info);

};

