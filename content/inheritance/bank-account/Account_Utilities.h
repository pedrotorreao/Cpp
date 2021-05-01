#pragma once

#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checkings_Account.h"

// utility functions for Account class:
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amountToDeposit);
void withdraw(std::vector<Account> &account, double amountToWithdraw);

// utility functions for Savings_Account class:
void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amountToDeposit);
void withdraw(std::vector<Savings_Account> &account, double amountToWithdraw);

// utility functions for Checkings_Account class:
void display(const std::vector<Checkings_Account> &accounts);
void deposit(std::vector<Checkings_Account> &accounts, double amountToDeposit);
void withdraw(std::vector<Checkings_Account> &account, double amountToWithdraw);