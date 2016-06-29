/*
* Title               : Rupiahs Money Fraction Counter (MenghitungPecahanRupiah.c)
* Program Description : Calculate Rupiahs Fraction using C Language Code
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

typedef struct
{
	long int seribu,limaratus,seratus,limapuluh,dualima,rupiah;
}uang;

uang u;
long int sisa1,sisa2,sisa3,sisa4,jumlah;

main()
{
	printf("Rupiahs Fraction Counter Console Program \n");
	printf("Please Insert Only Positive Integer Number \n");
	printf("Please Insert the Rupiahs Amount: \n");
	scanf("%ld",&jumlah);
	
	u.seribu=jumlah/1000;
	sisa1=jumlah%1000;
	u.limaratus=sisa1/500;
	sisa2=sisa1%500;
	u.seratus=sisa2/100;
	sisa3=sisa2%100;
	u.limapuluh=sisa3/50;
	sisa4=sisa3%50;
	u.dualima=sisa4/25;
	u.rupiah=sisa4%25;
	
	printf("The Result from Rupiahs Fraction Counter Operation is:  %ld %s %ld %s %ld %s %ld %s %ld %s %ld %s \n",u.seribu," buah Rp.1000, ",u.limaratus," buah Rp.500,",u.seratus," buah Rp.100,",u.limapuluh," buah Rp.50,",u.dualima," buah Rp.25,",u.rupiah," buah Rupiah.");
	
}
