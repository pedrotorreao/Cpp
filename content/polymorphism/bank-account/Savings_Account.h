#pragma once

#include "Account.h"

class Savings_Account : public Account
{
private:
  static constexpr const char *default_name = "Unused/Vacant Savings Account";
  static constexpr double default_balance = 0.0;
  static constexpr double default_interest = 0.0;

protected:
  double interest;

public:
  Savings_Account(std::string acc_user = default_name, double acc_balance = default_balance, double interest = default_interest);

  virtual bool deposit(double amountToDeposit) override;
  virtual bool withdraw(double amountToWithdraw) override;

  virtual void print(std::ostream &os) const override;

  virtual ~Savings_Account() = default;
};