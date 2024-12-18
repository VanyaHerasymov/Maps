// Maps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include "Date.h"
#include "Diary.h"
using namespace std;

int main()
{
    /*map<string, int> words;

    string user;
    while (user != "stop") {
        cout << "Input a word: ";
        cin >> user;
        if (user == "stop")break;

        if (words.find(user) == words.end()) {

            //words.insert(pair<string, int>(user, 1));
            words[user] = 1;
        
        }
        else {
            words[user]++;
        }

    }
        cout << "---------------------"<<endl;
    
        
        
    for (auto& item : words)
    {
        cout << item.first << " " << item.second << endl;



    }*/
    Diary Ivan;

    Ivan.addEvent(Date(2025, 1, 9), "New study year");
    Ivan.showInfo();
    Ivan.findByDate(Date(2025, 1, 9));
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
