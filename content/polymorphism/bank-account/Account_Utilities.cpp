#include <iostream>
#include <vector>
#include "Account_Utilities.h"

// utility functions for Account class:
void display(const std::vector<Account> &accounts)
{
  std::cout << "\n <>>>>>>>>>> ACCOUNTS LIST <<<<<<<<<<>"
            << "\n";
  for (const auto &acc : accounts)
  {
    std::cout << acc << "\n";
  }
}

void deposit(std::vector<Account> &accounts, double amountToDeposit)
{
  std::cout << "\n <>>>>>>>>>> DEPOSITING TO ACCOUNTS <<<<<<<<<<>"
            << "\n";
  for (auto &acc : accounts)
  {
    if (acc.deposit(amountToDeposit))
    {
      std::cout << "---- " << amountToDeposit << " was credited into account:\n"
                << acc << "\n";
    }
    else
    {
      std::cout << "---- " << amountToDeposit << " failed to be deposited to account:\n"
                << acc << "\n";
    }
  }
}

void withdraw(std::vector<Account> &accounts, double amountToWithdraw)
{
  std::cout << "\n <>>>>>>>>>> WITHDRAWING FROM ACCOUNTS <<<<<<<<<<>"
            << "\n";
  for (auto &acc : accounts)
  {
    if (acc.withdraw(amountToWithdraw))
    {
      std::cout << "---- " << amountToWithdraw << " was successfully withdrawn from account:\n"
                << acc << "\n";
    }
    else
    {
      std::cout << "---- " << amountToWithdraw << " failed to be withdrawn from account:\n"
                << acc << "\n";
    }
  }
}

// utility functions for Savings_Account class:
void display(const std::vector<Savings_Account> &accounts)
{
  std::cout << "\n <>>>>>>>>>> SAVINGS ACCOUNTS LIST <<<<<<<<<<>"
            << "\n";
  for (const auto &acc : accounts)
  {
    std::cout << acc << "\n";
  }
}

void deposit(std::vector<Savings_Account> &accounts, double amountToDeposit)
{
  std::cout << "\n <>>>>>>>>>> DEPOSITING TO SAVINGS ACCOUNTS <<<<<<<<<<>"
            << "\n";
  for (auto &acc : accounts)
  {
    if (acc.deposit(amountToDeposit))
    {
      std::cout << "---- " << amountToDeposit << " was credited into account:\n"
                << acc << "\n";
    }
    else
    {
      std::cout << "---- " << amountToDeposit << " failed to be deposited to account:\n"
                << acc << "\n";
    }
  }
}

void withdraw(std::vector<Savings_Account> &accounts, double amountToWithdraw)
{
  std::cout << "\n <>>>>>>>>>> WITHDRAWING FROM SAVINGS ACCOUNTS <<<<<<<<<<>"
            << "\n";
  for (auto &acc : accounts)
  {
    if (acc.withdraw(amountToWithdraw))
    {
      std::cout << "---- " << amountToWithdraw << " was successfully withdrawn from account:\n"
                << acc << "\n";
    }
    else
    {
      std::cout << "---- " << amountToWithdraw << " failed to be withdrawn from account:\n"
                << acc << "\n";
    }
  }
}

// utility functions for Checkings_Account class:
void display(const std::vector<Checkings_Account> &accounts)
{
  std::cout << "\n <>>>>>>>>>> CHECKINGS ACCOUNTS LIST <<<<<<<<<<>"
            << "\n";
  for (const auto &acc : accounts)
  {
    std::cout << acc << "\n";
  }
}

void deposit(std::vector<Checkings_Account> &accounts, double amountToDeposit)
{
  std::cout << "\n <>>>>>>>>>> DEPOSITING TO CHECKINGS ACCOUNTS <<<<<<<<<<>"
            << "\n";
  for (auto &acc : accounts)
  {
    if (acc.deposit(amountToDeposit))
    {
      std::cout << "---- " << amountToDeposit << " was credited into account:\n"
                << acc << "\n";
    }
    else
    {
      std::cout << "---- " << amountToDeposit << " failed to be deposited to account:\n"
                << acc << "\n";
    }
  }
}

void withdraw(std::vector<Checkings_Account> &accounts, double amountToWithdraw)
{
  std::cout << "\n <>>>>>>>>>> WITHDRAWING FROM CHECKINGS ACCOUNTS <<<<<<<<<<>"
            << "\n";
  for (auto &acc : accounts)
  {
    if (acc.withdraw(amountToWithdraw))
    {
      std::cout << "---- " << amountToWithdraw << " was successfully withdrawn from account:\n"
                << acc << "\n";
    }
    else
    {
      std::cout << "---- " << amountToWithdraw << " failed to be withdrawn from account:\n"
                << acc << "\n";
    }
  }
}

// utility functions for Savings_Account class:
void display(const std::vector<Trust_Account> &accounts)
{
  std::cout << "\n <>>>>>>>>>> TRUST ACCOUNTS LIST <<<<<<<<<<>"
            << "\n";
  for (const auto &acc : accounts)
  {
    std::cout << acc << "\n";
  }
}

void deposit(std::vector<Trust_Account> &accounts, double amountToDeposit)
{
  std::cout << "\n <>>>>>>>>>> DEPOSITING TO TRUST ACCOUNTS <<<<<<<<<<>"
            << "\n";
  for (auto &acc : accounts)
  {
    if (acc.deposit(amountToDeposit))
    {
      std::cout << "---- " << amountToDeposit << " was credited into account:\n"
                << acc << "\n";
    }
    else
    {
      std::cout << "---- " << amountToDeposit << " failed to be deposited to account:\n"
                << acc << "\n";
    }
  }
}

void withdraw(std::vector<Trust_Account> &accounts, double amountToWithdraw)
{
  std::cout << "\n <>>>>>>>>>> WITHDRAWING FROM TRUST ACCOUNTS <<<<<<<<<<>"
            << "\n";
  for (auto &acc : accounts)
  {
    if (acc.withdraw(amountToWithdraw))
    {
      std::cout << "---- " << amountToWithdraw << " was successfully withdrawn from account:\n"
                << acc << "\n";
    }
    else
    {
      std::cout << "---- " << amountToWithdraw << " failed to be withdrawn from account:\n"
                << acc << "\n";
    }
  }
}