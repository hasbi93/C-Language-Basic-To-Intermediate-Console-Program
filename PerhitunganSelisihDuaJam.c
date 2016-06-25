/*
* Title               : Simple Lapse Time Counter (PerhitunganSelisihDuaJam.c)
* Program Description : To Calculate the Difference between Time using C Lang Program.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

typedef struct
{
	long int hh1,mm1,ss1;
	long int hh2,mm2,ss2;
	long int hh3,mm3,ss3;
}Jam;

Jam J;
long int totaldetik1;
long int totaldetik2;
long int totaldetik3;
long int sisa;

main()
{	
	printf("Simple Lapse Time Counter Console Program \n");
	printf("Enter the First Hour, Minutes, and Second that You Want: \n");
	scanf("%ld %ld %ld", &J.hh1, &J.mm1, &J.ss1);
	totaldetik1=(J.hh1*3600)+(J.mm1*60)+J.ss1;
	
	printf("Enter The Second Time (in Hours, Minutes, and Second; Note: Time Must Bigger Than The First Input) ,  \n" );
	scanf("%ld %ld %ld", &J.hh2, &J.mm2, &J.ss2);
	totaldetik2=(J.hh2*3600)+(J.mm2*60)+J.ss2;
	
	totaldetik3=totaldetik1-totaldetik2;
	J.hh3=totaldetik3/3600;
	sisa=totaldetik3%3600;
	J.mm3=sisa/60;
	J.ss3=sisa%60;
	
	printf("Time Lapse is: %ld %s %ld %s %ld %s \n",J.hh3," Hour ",J.mm3, " Minutes ",J.ss3, " Seconds ");
}
