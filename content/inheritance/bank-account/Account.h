#pragma once

#include <iostream>
#include <string>

class Account
{
  friend std::ostream &operator<<(std::ostream &os, const Account &accountObject);

private:
  static constexpr const char *default_name = "Unused/Vacant Account";
  static constexpr double default_balance = 0.0;

protected:
  std::string acc_user;
  double acc_balance;

public:
  Account(std::string acc_user = default_name, double acc_balance = default_balance);
  bool deposit(double amountToDeposit);
  bool withdraw(double amountToWithdraw);
  double getBalance() const;
}