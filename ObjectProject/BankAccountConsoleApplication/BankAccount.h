#pragma once
#include <iostream>

class BankAccount
{
private:
	double balance; //saldo
	std::string owner; //w�a�ciciel
	std::string currency; //waluta

public:
	BankAccount();
	BankAccount(double b, std::string o, std::string c);

	void AccountInformation();

	void DepositToAccount(double amount);//wp�ata
	bool WidthdrawalFromAccount(double amount); //wyp�ata

	void TransferBetweenAccounts(BankAccount& targetAcccount, double amount);
};

