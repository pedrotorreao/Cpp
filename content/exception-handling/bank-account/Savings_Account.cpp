#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string userName, double userBalance, double accInterest)
    : Account{userName, userBalance}, interest{accInterest}
{
}

bool Savings_Account::deposit(double amountToDeposit)
{
  amountToDeposit += (amountToDeposit * (interest / 100));

  return Account::deposit(amountToDeposit);
}

bool Savings_Account::withdraw(double amountToWithdraw)
{
  return Account::withdraw(amountToWithdraw);
}

void Savings_Account::print(std::ostream &os) const
{
  os << "[Account holder: " << this->acc_user
     << " - Balance: " << this->acc_balance
     << " - Interest rate: " << this->interest << "%"
     << "]"
     << "\n";
}