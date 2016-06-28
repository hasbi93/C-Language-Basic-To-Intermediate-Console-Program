/*
* Title               : Trapesium Wide Area Counter (luastrapesium.c)
* Program Description : To Calculate Trapesium Wide Area Using C Language Code.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

float l,a,t;

main()
{
	printf("Trapesium Wide Area Counter Console Program \n");
	printf("Please Insert the Base Width and the Height of Trapesium : \n");
	scanf("%f %f",&a,&t);
	l=0.5*(a*t);
	
	printf("The Trapesium Wide Area Value is: %f %s \n",l," cm2.");

}
