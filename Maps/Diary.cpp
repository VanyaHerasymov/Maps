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


	book[D].push_back(info);
	
}

void Diary::findByDate(Date D)
{
	for (auto item : book) {
		if(item.first==D){
			cout << item.first << endl;
			for (int i = 0; i < item.second.size(); i++) {
				cout << "\t" << item.second[i] << endl;

			}cout << endl;
		}
		else {
			cout << "there are no events with this Date";
		}
	}
}

void Diary::finByEvent(string info)
{
	/*for (auto item : book) {
		
		if(item.book)
		
		{
			cout << item.first << endl;
			for (int i = 0; i < item.second.size(); i++) {
				cout << "\t" << item.second[i] << endl;

			}cout << endl;
		}
		else {
			cout << "there are no events with this name";
		}
	}*/
}
