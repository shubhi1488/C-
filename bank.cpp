/*
C++ Program to demonstrate the working of a banking-system  
where we deposit and withdraw amount from our account.  
Creating an Account class which has deposit() and withdraw() methods
*/
#include<iostream>
using namespace std;
class Account{
	public:
		int acc_no;
		string name;
		float amount;
		//method to insert the values
		void insert(int a,string n,float amt){
			acc_no=a;
			name=n;
			amount=amt;
		}
		//method to display the contents
		void display(){
			cout<<acc_no<<" "<<name<<":"<<amount<<"\n";
		}
		//method to check the balance
		void CheckBalance(){
			cout<<"balance of your account is:"<<amount<<"\n";
		}
		//method to deposit money
		void deposit(int amt){
			amount=amount+amt;
			cout<<"deposited money are:"<<amt<<"\n";
		}
		//method to with draw money from the account
		void WithDraw(int amt){
			if(amount<amt){
				cout<<"sorry!You cannot withdraw your money"<<"\n";
				cout<<"Insufficient Balance"<<"\n";
			}
			else{
				amount=amount-amt;
				cout<<"money withdrawn are:"<<amt<<"\n";
			}
		}
};
int main(){
	Account a1;
	a1.insert(2005006789,"shubhi",1000);
	a1.display();
	a1.CheckBalance();
	a1.deposit(1000);
	a1.CheckBalance();
	a1.WithDraw(200);
	a1.CheckBalance();
	return 0;
	
}
