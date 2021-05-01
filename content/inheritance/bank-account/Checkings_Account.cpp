#include "Checkings_Account.h"

Checkings_Account::Checkings_Account(std::string userName, double userBalance, double accFee)
    : Account{userName, userBalance}, fee{accFee}
{
}

bool Checkings_Account::withdraw(double amountToWithdraw)
{
  amountToWithdraw -= fee;

  return Account::deposit(amountToWithdraw);
}

std::ostream &operator<<(std::ostream &os, const Checkings_Account &accountObject)
{
  os << "[Account holder: " << accountObject.acc_user
     << " - Balance: " << accountObject.acc_balance << "]"
     << " - Withdraw Fee: $" << accountObject.fee << "\n";
  return os;
}