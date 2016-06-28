/*
* Title               : Triangle Wide Area Counter (hitungluassegitiga.c)
* Program Description : To Calculate Triangle Wide Area using C Language Code.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

float l,a,t;

main()
{
	printf("Triangle Wide Area Counter Console Program \n");
	printf("Please Insert the Base Width Length and The Height of the Triangle:  \n");
	scanf("%f %f",&a,&t);
	l=0.5*(a*t);
	
	printf("The Triangle Wide Area is: %f %s \n",l," cm2.");

}
