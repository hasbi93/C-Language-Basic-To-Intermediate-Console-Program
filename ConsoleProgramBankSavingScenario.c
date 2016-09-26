/*
* Title               : Console Program Simulating Bank Saving Scenario(ConsoleProgramBankSavingScenario.c)
* Program Description : Write a C Language To Simulating Saving Money Process in Bank
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>
#include<math.h>
#include<string.h>

long int i,saldo,transaction,deposit,retrieve;

main()
{	
	i=1;
	saldo=0;
	transaction=0;
	deposit=0;
	retrieve=0;
	printf("Console Program Bank Credit-Debit Transaction Simulation  \n");
	printf("Use Only Positive Integer Number \n");
	printf("Credit Transaction:Please Deposit an Amount of Money: \n");
	scanf("%ld",&saldo);
	printf("Your  Credit Point is %ld Rupiahs \n",saldo);
	while(i!=0)
	{
	
		printf("Choose Your Type of Transaction: \n");
		printf("1.Deposit an Amount of Money \n");
		printf("2.Retrieve an Amount of Money \n");
		scanf("%ld",&transaction);
		switch(transaction)
		{
			case 1:
				{
					printf("Deposit an Amount of Money \n");
					scanf("%ld",&deposit);
					saldo=saldo+deposit;
					printf("Your Credit Point is %ld Rupiahs \n",saldo);
					break;
				}
			case 2:
				{
					printf("Retrieve an Amount of Money \n");
					scanf("%ld",&retrieve);
					saldo=saldo-retrieve;
					if(saldo<0)
					{
						saldo=saldo+retrieve;
						printf("Sorry, Your Credit Point is Insufficient \n");
					}
					else
						printf("Your Credit Point is %ld Rupiahs \n",saldo);
					break;
				}
			default:printf("Sorry, Your Input is Wrong. \n");
		}
		printf("Press Any Positive Integer Number To Continue The Program: \n");
		printf("Press 0 To End The Program: \n");
		scanf("%ld",&i);
	}
}

