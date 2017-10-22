#pragma once
#include <iostream>

class client
{
private:
	double const OCHARGE = 1.25; //1.25 per withdraw
public:
	client()
	{
		string username = "";
		string password = "";
		string name = "";
		double balance = 0.00;
	}

	void deposit(double deposit)
	{
		balance += deposit;
	}
	void withdraw(double withdrawal)
	{
		balance -= withdrawal;
		balance -= OCHARGE;
	}
	client newClient(string newName, string newUsername, string newPassword)
	{
		name = newName;
		username = newUsername;
		password = newPassword;
	}

};