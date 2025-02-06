#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    string accountType;
    int accountNumber;
    double balance ;

public:
    
    void getAccountHolder() 
	{
        cout << "Account Holder: " << accountHolder << endl;
    }

    void getAccountNumber() 
	{
        cout << "Account Number: " << accountNumber << endl;
    }

    void getAccountType()
	 {
        cout << "Account Type: " << accountType << endl;
    }

    void getBalance() 
	{
        cout << "Balance: " << balance << endl;
    }

    
    void setAccountType(string type) 
	{
        accountType = type;
    }


    void deposit(double amount) 
	{
        balance += amount;
        cout << "\nDeposited Amount: " << amount << endl;
        cout << "New Balance: " << balance << endl;
    }

    
    void withdraw(double amount) 
	{
        if (amount <= balance) 
		{
            balance -= amount;
            cout << "Withdrawing Amount: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        } 
		else 
		{
            cout << "Insufficient balance!" << endl;
        }
    }

    
    void displayAccountDetails()
	{
        cout << "\nAccount Details:" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
    
    BankAccount()
    {
    	
    	cout<<"Enter the Account holder's' name: "<<endl;
    	cin>>accountHolder;
    	cout<<"Enter account type: ";
    	cin>>accountType;
    	cout<<"Enter account number ";
    	cin>>accountNumber;
    	cout<<"Enter Balance";
    	cin>>balance;
	}
	
	BankAccount(string name,string type,int number,double Balance)
	{
		
	 	accountHolder=name;
    	accountType=type;
    	accountNumber=number;
     	balance=Balance;
	}
};

int main() 
{
    BankAccount b1;

    
    b1.setAccountType("Saving");
    cout<<"\nAccount 1 details\n";
    b1.displayAccountDetails();

    b1.deposit(500);  
    b1.withdraw(200); 

	string name,type;
	int number;
	double Balance;
	
	cout<<"\nEnter name ";
	cin>>name;
	
	cout<<"Enter type of account ";
	cin>>type;
	
	cout<<"Enter account number ";
	cin>>number;
	
	cout<<"Enter balance ";
	cin>>Balance;
	
	BankAccount b2(name,type,number,Balance);
	cout<<"\nAccount 2 details\n";
	b2.displayAccountDetails();
	
	b2.deposit(1000);
	b2.withdraw(500);
    return 0;
}

