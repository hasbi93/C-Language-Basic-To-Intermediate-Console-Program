/*
* Title               : Gradien Formula Counter (rumusgradien.c)
* Program Description : To Compute the Value of Gradien based on the Given Input.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

float x,a,b,c;

main()
{
	printf("Gradien Formula Counter Console Program \n");
	printf("Please Insert A,B, and C Value to Compute the Value of X \n");
	
	printf("Please Insert A Value (cm):  \n");
	scanf("%f",&a);
	printf("Please Insert B Value (cm): \n");
	scanf("%f",&b);
	printf("Please Insert C Value (cm): \n");
	scanf("%f",&c);
	x=((2*c*c)+(4*a*b)-b)/2*c;
	printf("The Value of X is:  %f %s \n",x," cm.");
}
