#include <iostream>
#include <string>
#include "client.h"
#include "interface.h"
using namespace std;

double const VER = 0.01;
int main()
{
	int choice;
	cout << "BANKING SYSTEM v" << VER << endl;
	mainMenu();
	cout << "CHOICE: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		signInMenu();
		break;
	case 2:
		signUpMenu();
		break;
	case 3:
		return 0;
	}


	return 0;
}