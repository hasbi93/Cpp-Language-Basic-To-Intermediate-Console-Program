/*
* Title               : ATM Machine Simulator Console Program(ATMSimulatorConsoleProgram.cpp)
* Program Description : This Program Created Using C++ Language  to Simulate How Automatic Teller Machine Works.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<iostream>	//Header

using namespace std;

int main()
{
	double i,balance,balance2,deposit,retrieve,limit; //Declaration Variable
	int menu;	//Declaration Variable
	i=1;		//initiation variable
	balance=0;	//initiation variable
	menu=0;		//initiation variable
	deposit=0;	//initiation variable
	retrieve=0;	//initiation variable
	limit=2000;	//initiation variable
	cout<<"Console Program Simulating How Automatic Teller Machine Works \n";  	//Program Title
	cout<<"Please Use Positive Integer Number Only \n";							//Program Condition
	cout<<"Please Enter Your First Deposit to Your Sample Bank Account \n";
	cin>>balance;
	cout<<"Your Account Balance is "<<balance<<"\n";
	cout<<"Please Understand That the Daily Retrieve Limit is USD $2000 \n";	//Program Condition
	cout<<"Retrieve Charge (2% of Retrieval Amount) Will be Imposed When Account Balance is Under USD $100 \n";		//Program Condition
	while(i!=0)			//While Loop
	{
		cout<<"Select the Menu to Continue: \n";
		cout<<"1.Deposit an Amount of Money \n";
		cout<<"2.Retrieve an Amount of Money \n";
		cout<<"3.Check Account Balance \n";
		cin>>menu;
		switch(menu)	//Switch Menu
		{
			case 1:		//1st Case
					{
						cout<<"Deposit an Amount of Money \n";
						cin>>deposit;
						balance=balance+deposit;
						cout<<"Your Account Balance Now is "<<balance<<"\n";
						break;
					}
			case 2:		//2nd Case
					{
						cout<<"Retrieve an Amount of Money \n";
						cin>>retrieve;
						if(balance<100)		//Conditional Statement
						{
							balance2=balance-(retrieve*0.02)-retrieve;
							if(balance2<0)	//Nested Conditional Statement
							{
								cout<<"Sorry, Your Balance is Insufficient \n";
							}
							else
							{
								balance=balance2;
								cout<<"Your Balance After Money Retrieval Now is "<<balance<<"\n";
							}
						}
						else
						{
							balance=balance-retrieve;
							if(balance2<0)	//Nested Conditional Statement
							{
								cout<<"Sorry, Your Ballance is Insufficient \n";
							}
							else
							{
								balance=balance2;
								cout<<"Your Balance After Money Retrieval Now is "<<balance<<"\n";
							}
						}
						break;
					}
			case 3: 	//3rd Case
					{
						cout<<"Your Account Balance is "	<<balance<<"\n";
					}
		}
		cout<<"If You Want to Continue the Program, Enter Any Positive Integer Number \n";	//While Loop 
		cout<<"If You Want to Close the Program, Enter 0 \n";
		cin>>i;
	}
	return 0;	//End of Program
}

