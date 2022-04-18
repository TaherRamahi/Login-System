#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	string tempUserName;
	string tempPass;
	string tempName;

	string tempUserName2;
	string tempPass2;
	string tempName2;
	int choice;
	
	vector <User> theUsers;


	
	while (true)
	{
		choice = mainMenu();
		if (choice == 1)
		{
			cout << "#####################################" << endl;
			cout << "#####################################" << endl;
			
			cout << "Welcome New User!!"<< endl;
			cout << "Enter a Name: ";
			cin >> tempName;
			cout << endl << "Enter a User-Name: ";
			cin >> tempUserName;
			cout << endl << "Enter a Passward: ";
			cin >> tempPass;
			
			cout << "#####################################" << endl;
			cout << "#####################################" << endl;
			User user(tempName, tempUserName, tempPass);
			theUsers.push_back(user);

		}
		else if (choice == 2)
		{
			cout << "*************************************" << endl;
			cout << "*************************************" << endl;
			cout << endl <<"Welcome to the Login Center!" << endl;
			cout << "Enter your User-Name: ";
			cin >> tempUserName2;
			cout << endl << "Enter your Password: ";
			cin >> tempPass2;

			for (int i = 0; i < theUsers.size(); i++)
			{
				if (theUsers.at(i).getUserName() == tempUserName2 && theUsers.at(i).getPass() == tempPass2)
				{
					cout << "Welcome Back " << theUsers.at(i).getName() << "!!!"<< endl;

				}
			}
		
			cout << "*************************************" << endl;
			cout << "*************************************" << endl;
		}
		else
		{
			break;
		}
	}
	return 0;
}
