/*
* Title               : Console Program Convert Latin Numerical to Roman Numeric (ConsoleProgramConvertLatinNumericaltoRomansNumeric.c)
* Program Description : Write a C Language Continuous Program to Convert Latin Numerical to Roman Numerical.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro
*/

#include<stdio.h>
#include<math.h>
#include<string.h>

int decimalNumber;
int j;  //Counter Value
int m; //Numerical Value 1000
int d; //Numerical Value 500
int c; //Numerical Value 100
int l; //Numerical Value 50
int x; //Numerical Value 10
int ix; //Numerical Value 9
int v; //Numerical Value 5
int iv; //Numerical Value 4
int i; //Numerical Value 1

main()
{
	j=1;
	printf("Console C Program Convert Latin Numerical to Roman Numeric. \n");
	while(j!=0)
	{
	printf("Insert Latin Numeric (in Positive Integer) that You Want to Convert: \n");
	scanf("%d",&decimalNumber);
	
	if(decimalNumber<=0)
	{
		printf("Error! Wrong Input \n");
		printf("Press Enter to Continue. \n");
	}
	
	m=decimalNumber/1000;
	decimalNumber=decimalNumber%1000;
	
	d=decimalNumber/500;
	decimalNumber=decimalNumber%500;
	
	c=decimalNumber/100;
	decimalNumber=decimalNumber%100;
	
	l=decimalNumber/50;
	decimalNumber=decimalNumber%50;
	
	x=decimalNumber/10;
	decimalNumber=decimalNumber%10;
	
	ix=decimalNumber/9;
	decimalNumber=decimalNumber%9;
	
	v=decimalNumber/5;
	decimalNumber=decimalNumber%5;
	
	iv=decimalNumber/4;
	decimalNumber=decimalNumber%4;
	
	i=decimalNumber;
	
	printf("Roman Numeral= ");
	
	for(j=1;j<=m;j++)
		printf("M");
		
	for(j=1;j<=d;j++)
		printf("D");
	
	for(j=1;j<=c;j++)
		printf("C");
		
	for(j=1;j<=l;j++)
		printf("L");
	
	for(j=1;j<=x;j++)
		printf("X");
	
	for(j=1;j<=ix;j++)
		printf("IX");
	
	for(j=1;j<=v;j++)
		printf("V");
	
	for(j=1;j<=iv;j++)
		printf("IV");
	
	for(j=1;j<=i;j++)
		printf("I");
		
	printf("\n");
	printf("Enter Any Positif Integer Number To Continue The Program: \n");
	printf("Enter 0 To Close The Program: \n");
	scanf("%d",&j);
	}
}
