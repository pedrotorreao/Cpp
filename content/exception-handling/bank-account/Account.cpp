#include "Account.h"

Account::Account(std::string userName, double userBalance)
    : acc_user{userName}, acc_balance{userBalance}
{
  if (acc_balance < 0.0)
  {
    throw IllegalBalanceException();
  }
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
    // return false;
    throw InsufficientFundsException();
  }

  acc_balance -= amountToWithdraw;
  return true;
}

void Account::print(std::ostream &os) const
{
  os << "[Account holder: " << this->acc_user << " - Balance: " << this->acc_balance << "]"
     << "\n";
}
