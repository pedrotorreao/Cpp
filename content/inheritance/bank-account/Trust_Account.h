#pragma once

#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
  friend std::ostream &operator<<(std::ostream &os, const Trust_Account &accountObject);

private:
  static constexpr const char *default_name = "Unused/Vacant Trust Account";
  static constexpr double default_balance = 0.0;
  static constexpr int default_withdraw_count = 0;
  static constexpr double default_deposit_bonus = 50.00;

protected:
  int withdrawCount;
  double depositBonus;

public:
  Trust_Account(
      std::string acc_user = default_name,
      double acc_balance = default_balance,
      int withdrawCount = default_withdraw_count,
      double depositBonus = default_deposit_bonus);
  bool deposit(double amountToDeposit);
  bool withdraw(double amountToWithdraw);
}