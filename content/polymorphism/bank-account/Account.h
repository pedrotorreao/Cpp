#pragma once

#include <iostream>
#include <string>
#include "I_Printable.h"

// Account is an abstract base class
class Account : public I_Printable
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
  // 1.  Modify the Account class so that it is now an Abstract class by adding the following pure virtual functions:
  virtual bool deposit(double amountToDeposit) = 0;
  virtual bool withdraw(double amountToWithdraw) = 0;

  // double getBalance() const;
  virtual ~Account() = default; // C++ generated default destructor
};