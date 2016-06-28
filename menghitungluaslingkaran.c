/*
* Title               : Circle Value Counter (menghitungluaslingkaran.c)
* Program Description : To Calculate the Circle Value using C Language Code
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

const float phi=3.14;

float l,r;

main()
{
	printf("Circle Value Counter Console Program: \n");
	printf("Please Insert the Radius Value of the Circle : \n");
	scanf("%f",&r);
	l=phi*r*r;
	
	printf("The Circle have wide are: %f %s \n",l," cm2.");
}
