/*
* Title               : Total Second Counter Console Program (ProgramKonversiJamKeDetik.c)
* Program Description : Convert and Calculate from a Normal Hour, Minutes, Seconds to Only in Total Seconds.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

typedef struct
{
	int hh;
	int mm;
	int ss;
} Jam;

Jam J;
int totaldetik;

main()
{	
	printf("Total Second Counter and Converter Console Program \n");
	printf("Please Use Only Positive Integer Number. \n");
	printf("Please Insert The Value of Hour, Minutes, and Second \n");
	scanf("%d %d %d", &J.hh, &J.mm, &J.ss);
	totaldetik=(J.hh*3600)+(J.mm*60)+J.ss;
	printf("The Total Number of Seconds is %d \n", totaldetik);
}
