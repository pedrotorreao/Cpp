#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string userName, double userBalance, double accInterest)
    : Savings_Account{userName, userBalance}, withdrawCount{0}
{
}

// Deposits of $5000.00 or more receive a $50.00 bonus deposited to the account:
bool Trust_Account::deposit(double amountToDeposit)
{
  if (amountToDeposit >= default_deposit_bonus_thresh)
  {
    amountToDeposit += default_deposit_bonus;
  }

  return Savings_Account::deposit(amountToDeposit);
}

// The Trust accounts have a limit of 3 withdrawals and each of these must be < 20% of the account balance:
bool Trust_Account::withdraw(double amountToWithdraw)
{
  if ((withdrawCount >= default_withdraw_thresh) || (amountToWithdraw > (acc_balance * default_max_withdraw_pct)))
  {
    return false;
  }
  withdrawCount++;
  return Savings_Account::withdraw(amountToWithdraw);
}

void Trust_Account::print(std::ostream &os) const
{
  os << "[Account holder: " << this->acc_user
     << " - Balance: " << this->acc_balance
     << " - Withdraws this year: " << this->withdrawCount << " | Limit: 3"
     << "\n"
     << "Max withdraw amount allowed: $" << (this->acc_balance * this->default_max_withdraw_pct)
     << "]"
     << "\n";
}