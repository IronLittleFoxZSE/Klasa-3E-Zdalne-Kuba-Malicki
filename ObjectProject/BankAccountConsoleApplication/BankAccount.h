#pragma once
#include <iostream>

class BankAccount
{
private:
	double balance; //saldo
	std::string owner; //w³aœciciel
	std::string currency; //waluta

public:
	BankAccount();
	BankAccount(double b, std::string o, std::string c);

	void AccountInformation();

	void DepositToAccount(double amount);//wp³ata
	bool WidthdrawalFromAccount(double amount); //wyp³ata

	void TransferBetweenAccounts(BankAccount& targetAcccount, double amount);
};

