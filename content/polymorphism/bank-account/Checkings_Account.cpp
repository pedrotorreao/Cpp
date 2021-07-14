#include "Checkings_Account.h"

Checkings_Account::Checkings_Account(std::string userName, double userBalance)
    : Account{userName, userBalance}
{
}

// Every withdrawal transaction has a fee of $1.50 per withdrawal:
bool Checkings_Account::withdraw(double amountToWithdraw)
{
  amountToWithdraw += default_fee;

  return Account::withdraw(amountToWithdraw);
}

bool Checkings_Account::deposit(double amountToDeposit)
{
  return Account::deposit(amountToDeposit);
}

std::ostream &operator<<(std::ostream &os, const Checkings_Account &accountObject)
{
  os << "[Account holder: " << accountObject.acc_user
     << " - Balance: " << accountObject.acc_balance
     << " - Withdraw Fee: $" << accountObject.default_fee << "]"
     << "\n";
  return os;
}