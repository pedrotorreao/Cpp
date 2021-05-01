#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string userName, double userBalance, int userWithdrawCount, double userDepositBonus)
    : Savings_Account{userName, userBalance}, withdrawCount{userWithdrawCount}, depositBonus{userDepositBonus}
{
}

bool Trust_Account::deposit(double amountToDeposit)
{
  if (amountToDeposit >= 5000.00)
  {
    amountToDeposit += depositBonus;
  }

  return Savings_Account::deposit(amountToDeposit);
}

bool Trust_Account::withdraw(double amountToWithdraw)
{
  withdrawCount++;
  if (withdrawCount > 3)
  {
    return false;
  }

  return Savings_Account::withdraw(amountToWithdraw);
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &accountObject)
{
  os << "[Account holder: " << accountObject.acc_user
     << " - Balance: " << accountObject.acc_balance
     << " - Withdraws this year: " << accountObject.withdrawCount << " | Limit: 3"
     << "]"
     << "\n";
  return os;
}