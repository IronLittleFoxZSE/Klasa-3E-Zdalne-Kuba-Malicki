
#include <iostream>
#include "BankAccount.h"

int main()
{
    BankAccount account;
    account.AccountInformation();
    account.DepositToAccount(150);
    account.AccountInformation();

    BankAccount secondAccount(100, "Jan Kowalski", "z³");
    secondAccount.AccountInformation();
    secondAccount.WidthdrawalFromAccount(250);
    secondAccount.AccountInformation();

    secondAccount.TransferBetweenAccounts(account, 15);
    account.AccountInformation();
    secondAccount.AccountInformation();
}
