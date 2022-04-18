#pragma once
#include <iostream>
#include<vector>
using namespace std;
int countNum = 0;

class User
{
	string name;
	string userName;
	string passWord;
	


public :
	User(string thename, string theUserName, string thePass)
	{
		name = thename;
		userName = theUserName;
		passWord = thePass;
	}
	string getName()
	{
		return name;
	}
	string getUserName()
	{
		return userName;
	}
	string getPass()
	{
		return passWord;
	}
	
};


int mainMenu()
	{
		int choice;
		if (countNum == 0)
		{
			cout << "Welcome to the Login System!! " << endl << endl;
			countNum++;
		}
		do
		{
			cout <<endl <<"If you would like to create an account please enter 1." <<endl<<  "If you would like to login please enter 2." << endl<<"If you would like to exit please enter 3."<< endl;
				cin >> choice;
		} while (choice != 2 && choice != 1 && choice != 3);
		
		return choice;

	}

