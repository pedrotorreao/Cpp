#include <iostream>
#include <vector>
#include <string>
#include "Savings_Account.h"
#include "Checkings_Account.h"
#include "Trust_Account.h"
#include "Account_Utilities.h"

int main()
{
  std::cout.precision(2);
  std::cout << std::fixed;

  // Accounts
  std::vector<Account> accounts;
  accounts.push_back(Account{});
  accounts.push_back(Account{"Larry"});
  accounts.push_back(Account{"Moe", 2000});
  accounts.push_back(Account{"Curly", 5000});

  display(accounts);
  deposit(accounts, 1000);
  withdraw(accounts, 2000);

  // Savings

  std::vector<Savings_Account> sav_accounts;
  sav_accounts.push_back(Savings_Account{});
  sav_accounts.push_back(Savings_Account{"Superman"});
  sav_accounts.push_back(Savings_Account{"Batman", 2000});
  sav_accounts.push_back(Savings_Account{"Wonderwoman", 5000, 5.0});

  display(sav_accounts);
  deposit(sav_accounts, 1000);
  withdraw(sav_accounts, 2000);

  // Checkings

  std::vector<Checkings_Account> check_accounts;
  check_accounts.push_back(Checkings_Account{});
  check_accounts.push_back(Checkings_Account{"Iron Man"});
  check_accounts.push_back(Checkings_Account{"Deadpool", 2000});
  check_accounts.push_back(Checkings_Account{"Flash", 5000});

  display(check_accounts);
  deposit(check_accounts, 1000);
  withdraw(check_accounts, 2000);

  // Trust

  std::vector<Trust_Account> trust_accounts;
  trust_accounts.push_back(Trust_Account{});
  trust_accounts.push_back(Trust_Account{"Thor"});
  trust_accounts.push_back(Trust_Account{"Thanos", 2000});
  trust_accounts.push_back(Trust_Account{"Dr. Stranger", 5000});

  display(trust_accounts);
  deposit(trust_accounts, 6000);
  withdraw(trust_accounts, 2500);
  withdraw(trust_accounts, 100);
  withdraw(trust_accounts, 100);
  withdraw(trust_accounts, 200);

  return 0;
}