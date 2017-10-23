#pragma once
#include <iostream>
#include <string>
#include "interface.h"
using namespace std;

class client
{
private:
	//SETS UP CONSTANT OF WITHDRAWAL CHARGE
	double const OCHARGE = 1.25; //1.25 per withdraw
public:
	string username, password, name, email;
	double balance;
	//INITIAL CLIENT INFO
	client()
	{
		string username = "";
		string password = "";
		string name = "";
		string email = "";
		double balance = 0.00;
	}
	//MONEY DEPOSIT
	void deposit(double deposit)
	{
		balance += deposit;
	}
	//MONEY WITHDRAWAL
	void withdraw(double withdrawal)
	{
		balance -= withdrawal;
		balance -= OCHARGE;
	}
	//CREATES NEW CLIENT
	client newClient(string newName, string newEmail, string newUsername, string newPassword)
	{
		name = newName;
		email = newEmail;
		username = newUsername;
		password = newPassword;
	}

};