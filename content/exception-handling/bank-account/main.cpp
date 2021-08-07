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

  try
  {
    accounts.push_back(new Savings_Account());
    accounts.push_back(new Savings_Account("Superman"));
    accounts.push_back(new Savings_Account("Flash", -1500, 5.0));
    accounts.push_back(new Savings_Account("Batman", 2000));
    accounts.push_back(new Savings_Account("Wonderwoman", 5000, 5.0));
  }
  catch (const IllegalBalanceException &ex)
  {
    std::cerr << ex.what() << "\n";
  }

  display(accounts);
  deposit(accounts, 1000);

  try
  {
    withdraw(accounts, 2000);
  }
  catch (const InsufficientFundsException &ex)
  {
    std::cerr << ex.what() << "\n";
  }
  display(accounts);

  // deallocate memory previously allocated on the heap in order to
  // to free this unused storage and avoid memory leaks:
  for (auto ptr : accounts)
  {
    delete ptr;
  }

  return 0;
}