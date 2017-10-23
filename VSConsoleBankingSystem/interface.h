#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include "client.h"
using namespace std;

void mainMenu()
{
	cout << "-----------------------------------------" << endl;
	cout << "1) Sign In." << endl;
	cout << "2) Sign Up." << endl;
	cout << "3) Exit." << endl;
	cout << "-----------------------------------------" << endl;
}

void signInMenu()
{
	string username, password;
	system("cls");
	cout << "username: ";
	cin >> username;
	cout << "password: ";
	cin >> password;

	//SEARCH IF THERE IS A USER/PASS UNDER USER'S INPUT.


}

void signUpMenu()
{
	char answer;
	size_t posAt, posCom; //NOT EXACTLY SURE. LEARN.
	string searchAt = "@", searchCom = ".com";  //USED TO SEARCH IF EMAIL CONTAINS THOSE.
	string firstName, lastName, username, password, passwordEntry2, email;
	system("cls");
	//ASK FOR NAME.
	cout << "What is your name? [First Last]: ";
	cin >> firstName;
	cin >> lastName;
	//CLARIFY NAME.
	cout << firstName + " " + lastName << ". Is this correct? [y/n]: ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
	{
		system("cls");
		cout << "Nice to meet you, " + firstName + " " + lastName + "!" << endl;
	}
	else if (answer == 'n' || answer == 'N')
		do {
			system("cls");
			cout << "What is your name? [First Last]: ";
			cin >> firstName;
			cin >> lastName;
			cout << firstName + " " + lastName << ". Is this correct? [y/n]: ";
			cin >> answer;
		} while (answer == 'n' || answer == 'N');
	else
	{
		do {
			system("cls");
			cout << "You must have inputted something wrong." << endl;
			cout << firstName + " " + lastName << ". Is this correct? [y/n]: ";
			cin >> answer;
		} while (answer != 'y' && answer != 'n' && answer != 'Y' && answer != 'N');
	}
	//ASK FOR EMAIL AND CHECKS IF IT'S PROPER. (@ && .com)
	cout << "Email: ";
	cin >> email;
	posAt = email.find(searchAt); //FIND FUNCTION TO FIND IN EMAIL STRING
	posCom = email.find(searchCom);
	if (posAt != string::npos && posCom != string::npos) //NOT EXACTLY SURE. LEARN.
		cout << endl;
	else
	{
		do {
			cout << "Make sure you inputted your email correctly." << endl;
			Sleep(2500); //PAUSES SO READER CAN READ THAT
			system("cls");
			cout << "Nice to meet you, " + firstName + " " + lastName + "!" << endl;
			cout << "Email: ";
			cin >> email;
			posAt = email.find(searchAt);
			posCom = email.find(searchCom);
		} while (posAt == string::npos || posCom == string::npos);
	}
	//ASK FOR USERNAME
	cout << "Username: ";
	cin >> username;
	//ASK FOR PASSWORD, RE-ENTER PASSWORD, AND CHECKER.
	cout << "Password: ";
	cin >> password;
	cout << "Please re-enter your password";
	cin >> passwordEntry2;
	if (password != passwordEntry2)
	{
		do {
			cout << "The passwords you provided do not match. Please try again." << endl;
			Sleep(2500);
			system("cls");
			cout << "Nice to meet you, " + firstName + " " + lastName + "!" << endl;
			cout << email << endl;
			cout << username << endl;
			cout << "Password: ";
			cin >> password;
			cout << "Please re-enter your password";
			cin >> passwordEntry2;
		} while (password != passwordEntry2);
	}
	else
		cout << "Account Created. Nice to have you, " + firstName + " " + lastName + "!" << endl;
	Sleep(2500);
	system("cls");
	mainMenu();
}

void adminMenu()
{
	system("cls");

}
