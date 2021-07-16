#pragma once

#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checkings_Account.h"
#include "Trust_Account.h"

// utility functions for Account classes:

// 3. Modify the functions in the Account_Util files so we only have one version of each:
void display(const std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts, double amountToDeposit);
void withdraw(std::vector<Account *> &account, double amountToWithdraw);