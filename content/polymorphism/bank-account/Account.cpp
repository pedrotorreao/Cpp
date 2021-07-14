#include "Account.h"

Account::Account(std::string userName, double userBalance)
    : acc_user{userName}, acc_balance{userBalance}
{
}

bool Account::deposit(double amountToDeposit)
{
  if (amountToDeposit < 0)
  {
    return false;
  }
  acc_balance += amountToDeposit;
  return true;
}

bool Account::withdraw(double amountToWithdraw)
{
  if (acc_balance - amountToWithdraw < 0)
  {
    return false;
  }
  acc_balance -= amountToWithdraw;
  return true;
}

// double Account::getBalance() const
// {
//   return acc_balance;
// }

std::ostream &operator<<(std::ostream &os, const Account &accountObject)
{
  os << "[Account holder: " << accountObject.acc_user << " - Balance: " << accountObject.acc_balance << "]"
     << "\n";
  return os;
}