/*
* Title               : Ant Travel Distance Counter from Cm to Km Sample Console Program (KonversiCmKmJarakTempuhSemut.c)
* Program Description : To Convert Ant Travel Distance from Cm to Km using C Lang. Code
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

const long int kilometer=100000;
const long int meter=100;

typedef struct
	{
		long int km,m,cm;
	}jarak;

jarak j;
long int x,sisa;

main()
{
	printf("Ant Travel Distance Converter (cm to km) Sample Console Program \n");
	printf("Please Only Insert Positive Integer Number \n");
	printf("Please Insert Ant Travel Distance  (in cm):\n");
	scanf("%ld",&x);
	
	j.km =x/kilometer;
	sisa=x% kilometer;
	j.m=sisa/meter;
	j.cm=sisa%meter;
	
	printf("The Total of Ant Travel Distance is:  %ld %s %ld %s %ld %s \n",j.km," Km,",j.m," m,",j.cm," cm.");
	
}
