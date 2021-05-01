#pragma once

#include "Account.h"

class Checkings_Account : public Account
{
  friend std::ostream &operator<<(std::ostream &os, const Checkings_Account &accountObject);

private:
  static constexpr const char *default_name = "Unused/Vacant Savings Account";
  static constexpr double default_balance = 0.0;
  static constexpr double default_fee = 1.5;

protected:
  double fee;

public:
  Checkings_Account(std::string acc_user = default_name, double acc_balance = default_balance, double fee = default_fee);
  bool withdraw(double amountToWithdraw);
};