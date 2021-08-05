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

  std::vector<Account *> accounts;
  accounts.push_back(new Savings_Account());
  accounts.push_back(new Savings_Account("Superman"));
  accounts.push_back(new Savings_Account("Batman", 2000));
  accounts.push_back(new Savings_Account("Wonderwoman", 5000, 5.0));

  display(accounts);
  deposit(accounts, 1000);
  withdraw(accounts, 2000);

  // Checkings Accounts:
  accounts.push_back(new Checkings_Account());
  accounts.push_back(new Checkings_Account("Iron Man"));
  accounts.push_back(new Checkings_Account("Deadpool", 2000));
  accounts.push_back(new Checkings_Account("Flash", 5000));

  display(accounts);
  deposit(accounts, 1000);
  withdraw(accounts, 2000);

  // Trust Accounts:
  accounts.push_back(new Trust_Account());
  accounts.push_back(new Trust_Account("Thor"));
  accounts.push_back(new Trust_Account("Thanos", 2000));
  accounts.push_back(new Trust_Account("Dr. Stranger", 5000));

  display(accounts);
  deposit(accounts, 6000);  // PASSES: 6000 + deposit bonus
  withdraw(accounts, 2500); // FAILS: amount > 20% of account's balance
  withdraw(accounts, 100);  // PASSES
  withdraw(accounts, 100);  // PASSES
  withdraw(accounts, 200);  // PASSES
  withdraw(accounts, 500);  // FAILS: max withdraw count reached

  // deallocate memory previously allocated on the heap in order to
  // to free this unused storage and avoid memory leaks:
  for (auto ptr : accounts)
  {
    delete ptr;
  }

  return 0;
}