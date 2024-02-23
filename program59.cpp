#include<iostream>
using namespace std;

class BankAccount
{
    private :
      int AccNumber[90];
      double balance;

    public:
      BankAccount(int *ptr,double initialbalance)
      {
        
        balance=initialbalance;
      }
      void Deposite(double amount)
      {
        balance=balance + amount;
        cout<<"Deposite Successfully . Current balance : "<<balance<<"\n";

      }
      void withdraw(double withamt)
      {
        if(balance > withamt)
        {
            balance = balance - withamt;
            cout<<"Amout withdraw Successfully . Current Balance is "<<balance<<"\n";
        }
        else
        {
            cout<<"insufficient balance\n";
        }
      }

};

int main()
{
    int acc[90];
    double initial_balance,deposit_amt,withdraw_amt;
    cout<<"Enter the account number , opening balance , deposite amount and withdraw amount\n";
    cin>>acc[90]>>initial_balance>>deposit_amt>>withdraw_amt;
    BankAccount b(acc,initial_balance);
    
    b.Deposite(initial_balance);
    b.

    
}