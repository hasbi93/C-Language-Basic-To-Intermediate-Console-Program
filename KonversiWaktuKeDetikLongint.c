/*
* Title               : Second to Hour Converter Program (KonversiWaktuKeDetikLongint.c)
* Program Description : a Simple Second to Hour Converter using C Lang. with Console Interface
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/


#include<stdio.h>

typedef struct
{
	long int hh, mm, ss;
}Jam;

Jam J;
long int totaldetik;

main()
{
	printf("masukkan nilai jam, menit, dan detik \n");
	scanf("%ld %ld %ld", &J.hh, &J.mm, &J.ss);
	
	totaldetik=(J.hh*3600)+(J.mm*60)+J.ss;
	
	printf("nilai total konversi detik adalah %ld \n", totaldetik);
	
}
