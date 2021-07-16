#pragma once

#include "Account.h"

class Checkings_Account : public Account
{
private:
  static constexpr const char *default_name = "Unused/Vacant Checkings Account";
  static constexpr double default_balance = 0.0;
  static constexpr double default_fee = 1.5;

public:
  Checkings_Account(std::string acc_user = default_name, double acc_balance = default_balance);

  virtual bool withdraw(double amountToWithdraw) override;
  virtual bool deposit(double amountToDeposit) override;

  virtual void print(std::ostream &os) const override;

  virtual ~Checkings_Account() = default;
};