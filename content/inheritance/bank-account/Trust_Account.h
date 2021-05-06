#pragma once

#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
  friend std::ostream &operator<<(std::ostream &os, const Trust_Account &accountObject);

private:
  static constexpr const char *default_name = "Unused/Vacant Trust Account";
  static constexpr double default_balance = 0.0;
  static constexpr double default_interest = 0.0;
  static constexpr double default_max_withdraw_pct = 0.2;         // withdraw at most 20% of the account balance
  static constexpr int default_withdraw_thresh = 3;               // most withdrawls allowed per year
  static constexpr double default_deposit_bonus = 50.00;          // bonus for deposits > default_deposit_bonus_thresh
  static constexpr double default_deposit_bonus_thresh = 5000.00; // threshold for deposit bonus

protected:
  int withdrawCount;

public:
  Trust_Account(
      std::string acc_user = default_name,
      double acc_balance = default_balance,
      double interest = default_interest);
  bool deposit(double amountToDeposit);
  bool withdraw(double amountToWithdraw);
};