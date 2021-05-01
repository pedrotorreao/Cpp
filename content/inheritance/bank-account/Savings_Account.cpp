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

std::ostream &operator<<(std::ostream &os, const Savings_Account &accountObject)
{
  os << "[Account holder: " << accountObject.acc_user
     << " - Balance: " << accountObject.acc_balance
     << " - Interest rate: " << accountObject.interest << "%"
     << "]"
     << "\n";
  return os;
}