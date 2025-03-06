// Design a class BankAccount with the following specification :

//     Attributes :

//     accountNumber(string) : Represents the account number of the user's account balance(double) : Represents the balance of the account
//                                                                                                   Constructor :

//     Implement a parameterised constructor to have the accountNmber
//     and
//     balance initialised while creating the object.Methods :

//     deposit(double amount) : It adds the amount to the balance of the user's account. withdraw(double amount) : It deduct the money(amount) from the balance. If the balance is insufficient then print "Insufficient funds!" and do not change the original amount.
// displayDetails() : It diplays th accuntNumber and balance of the account.


// Refer the sample examples for understanding the output format.


// Examples:
// Input : accountNumber = "9662375274869" , balance = 8655 , addBalance = 5854 , withdrawBalance = 9437

// Output :

// Account Number : 9662375274869

// Balance : 5072.00

// Explanation :

// The object of the class BankAccount is created using the parameterised constructor with accountNumber and balance as the two arguments to constructor.
// Then the addBalance() method is called with parameter addBalance.
// Next the withdrawbalance() method is called with parameter withdrawBalance, Here the withdrawal balance is 9437 and Balance is 14509. So we can withdraw the given amount.
// Next the displayDetails() method is called which displays the account number and balance present in the account.
// Input : accountNumber = "9662375274869" , balance = 8655 , addBalance = 10, withdrawBalance = 9437

// Output :

// Insufficient funds!

// Account Number : 9662375274869

// Balance : 8665.00

// Explanation :

// The object of the class BankAccount is created using the parameterised constructor with accountNumber and balance as the two arguments to constructor.
// Then the addBalance() method is called with parameter addBalance.
// Next the withdrawbalance() method is called with parameter withdrawBalance, Here the withdrawal balance is 9437 and Balance is 8665. So we cannot withdraw the given amount so print "Insufficient funds!".
// Next the displayDetails() method is called which displays the account number and balance present in the account.
// Constraints:
// 1 <= amount <= 105


// #include<iostream>
// using namespace std;

// class Bank{
//   private:
//   string accountNumber;
//   double balance;

//   public:
//   Bank(string str, double num){
//     accountNumber = str;
//     balance = num;
//   }

//   void deposit(double amount){
//     if(amount<0){
//       cout << "Deposit amount cannot be negative!!!";
//     }
//     else{
//       balance += amount;
//       cout << "The " << amount << " has been debited to your account and the total balance is:" << balance << endl;
//     }
//   }
//   void withdraw(double amount){
//     if(amount>balance){
//       cout << "Insufficient Funds!!! You do have only this amount: " << balance<<endl;
//     }
//     else{
//       balance -= amount;
//       cout << "The " << amount << " has been withdrawn from you account and remaining amount is: " << balance << endl;
//     }
//   }

//   void displayDetails(){
//     cout << "The amount is: " << balance << endl;
//   }
// };

// int main()
// {
//   Bank *acc1 = new Bank("123131", 10000);
//   acc1->deposit(500);
//   acc1->displayDetails();
//   acc1->withdraw(1000);
//   acc1->displayDetails();
  
// }

#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount
{
private:
  string accountNumber;
  double balance;

public:
  BankAccount(string str, double num)
  {
    accountNumber = str;
    balance = num;
  }

  void deposit(double amount)
  {
    balance += amount;
  }

  void withdraw(double amount)
  {
    if (amount > balance)
    {
      cout << "Insufficient funds!" << endl;
    }
    else
    {
      balance -= amount;
    }
  }

  void displayDetails()
  {
    cout << "Account Number : " << accountNumber << endl;
    cout << "Balance : " << fixed << setprecision(2) << balance << endl;
  }
};

int main()
{
  string accountNumber = "9662375274869";
  double balance = 8655, addBalance = 5854, withdrawBalance = 9437;

  BankAccount acc(accountNumber, balance);
  acc.deposit(addBalance);
  acc.withdraw(withdrawBalance);
  acc.displayDetails();

  return 0;
}
