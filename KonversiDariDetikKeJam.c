/*
* Title               : Second To Hour Converter; a Simple Time Converter(KonversiDariDetikKeJam.c)
* Program Description : To Convert and Calculate an Amount of Time from Second to Hour.
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
long int sisa;

main()
{
	printf("Second to Hour Time Converter Console Program \n");
	printf("Please Insert an Amount of Second that You Want to Convert: \n");
	scanf("%ld", &totaldetik);
	J.hh=totaldetik/3600;
	sisa=totaldetik% 3600;
	J.mm=sisa/60;
	J.ss=sisa % 60;
	
	printf("The Result of Conversion:  %ld %s %ld %s %ld %s \n",J.hh,"Hour",J.mm,"Minutes",J.ss,"Second");
}

