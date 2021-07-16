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

void Checkings_Account::print(std::ostream &os) const
{
  os << "[Account holder: " << this->acc_user
     << " - Balance: " << this->acc_balance
     << " - Withdraw Fee: $" << this->default_fee << "]"
     << "\n";
}