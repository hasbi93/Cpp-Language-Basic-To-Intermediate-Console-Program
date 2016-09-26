/*
* Title               : Console Program Simulating Bank Saving Scenario(ConsoleProgramCreditDebitTransactionSimulation.cpp)
* Program Description : Write a C++ Language To Simulating Bank Credit Debit Transaction Process 
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro
*/

#include<iostream>

using namespace std;

int main()
{
	long int i,saldo,transaction,deposit,retrieve;
	i=1;
	saldo=0;
	transaction=0;
	deposit=0;
	retrieve=0;
	cout<<"Console Program Simulating Bank Credit Debit Transaction Process \n";
	cout<<"Use Positive Integer Number Only! \n";
	cout<<"Deposit Any Amount of Money to Your Sample Account: ";
	cin>>saldo;
	cout<<"Your Credit Account is "<<saldo<<"Rupiahs \n";
	while(i!=0)
	{
		cout<<"Choose Your Type of Transaction: \n";
		cout<<"1.Deposit an Amount of Money \n";
		cout<<"2.Retrieve an Amount of Money \n";
		cin>>transaction;
		switch(transaction)
		{
			case 1:
				{
					cout<<"Deposit an Amount of Money \n";
					cin>>deposit;
					saldo=saldo+deposit;
					cout<<"Your Cedit Point Now Are "<<saldo<<"Rupiahs \n";
					break;
				}
			case 2:
				{
					cout<<"Retrieve an Amount of Money \n";
					cin>>retrieve;
					saldo=saldo-retrieve;
					if(saldo<0)
					{
						saldo=saldo+retrieve;
						cout<<"Sorry, Your Credit Point is Insufficient \n";
					}
					else
					{
						cout<<"Your Credit Point Are "<<saldo<<"Rupiahs \n";
					}
					break;
				}
			default:cout<<"Sorry, Wrong Input! \n";
		}
		cout<<"Enter Any Positive Integer Number To Continue The Program: \n";
		cout<<"Enter 0 To Close The Program: \n";
		cin>>i;
	}
	return 0;
}
