#include "Diary.h"

Diary::Diary()
{
	book[Date()].push_back("C++");
	book[Date(2025,1,15)].push_back("C++");
	book[Date()].push_back("Pizza");
	book[Date(2007,8,11)].push_back("Happy Birthday");
}

void Diary::showInfo() const
{
	for (auto item : book) {
		cout << item.first << endl;
		for (int i = 0; i < item.second.size(); i++) {
			cout << "\t" << item.second[i] << endl;

		}cout << endl;
	}
}

void Diary::addEvent(Date D, string info)
{
}

void Diary::findByDate(Date D)
{
}

void Diary::finByEvent(string info)
{
}
