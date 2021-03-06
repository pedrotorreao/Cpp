#include <iostream>
#include <vector>
#include "Account_Utilities.h"

// utility functions for Account class:
void display(const std::vector<Account *> &accounts)
{
  std::cout << "\n <>>>>>>>>>> ACCOUNTS LIST <<<<<<<<<<>"
            << "\n";
  for (const auto acc : accounts)
  {
    std::cout << *acc << "\n";
  }
}

void deposit(std::vector<Account *> &accounts, double amountToDeposit)
{
  std::cout << "\n <>>>>>>>>>> DEPOSITING TO ACCOUNTS <<<<<<<<<<>"
            << "\n";
  for (auto acc : accounts)
  {
    if (acc->deposit(amountToDeposit))
    {
      std::cout << "---- " << amountToDeposit << " was credited into account:\n"
                << *acc << "\n";
    }
    else
    {
      std::cout << "---- " << amountToDeposit << " failed to be deposited to account:\n"
                << *acc << "\n";
    }
  }
}

void withdraw(std::vector<Account *> &accounts, double amountToWithdraw)
{
  std::cout << "\n <>>>>>>>>>> WITHDRAWING FROM ACCOUNTS <<<<<<<<<<>"
            << "\n";
  for (auto acc : accounts)
  {
    if (acc->withdraw(amountToWithdraw))
    {
      std::cout << "---- " << amountToWithdraw << " was successfully withdrawn from account:\n"
                << *acc << "\n";
    }
    else
    {
      std::cout << "---- " << amountToWithdraw << " failed to be withdrawn from account:\n"
                << *acc << "\n";
    }
  }
}