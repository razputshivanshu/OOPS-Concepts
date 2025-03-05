#include<iostream>
using namespace std;


class BankAccount{
  private:
    string name;
    int balance;

  public:
    void setNameAndBalance(string namee, int balancee){
      name = namee;
      balance = balancee;
    }

    void getBalance(){
      cout << "Current Account Balance is: " << balance<<endl;
    }

    void AddBalance(int num){
      if(num>0){
      balance += num;
      cout << "The " << num << " amount has been debited and the final amount is: "<<balance<<endl;
      }
      else{
        cout << "Balance can't be negative"<<endl;
      }
    }

    void withdrawMoney(int num){
      if(num <= balance){
        balance -= num;
        cout << "The " << num << " money has been withdrawn and remaining amount is: " << balance << endl;
      }
      else{
        cout << "Insufficient balance!! You do have only this amount: " << balance << endl;
      }
    }
};


int main(){
  BankAccount cust1;

  cust1.setNameAndBalance("Shivanshu", 10000);
  cust1.getBalance();
  cust1.AddBalance(10101);
  cust1.AddBalance(-1);

  cust1.withdrawMoney(500);
  cust1.withdrawMoney(1000000);

  
}