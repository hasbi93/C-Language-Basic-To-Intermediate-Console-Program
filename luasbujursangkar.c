/*
* Title               : Square Value Counter (luasbujursangkar.c)
* Program Description : To Calculate Square Area Wide using C language Code.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

float l,s;

main()
{
	printf("Square Value Counter Console Program \n");
	printf("Please Insert the Lenght of the Square:  \n");
	scanf("%f",&s);
	l=s*s;
	
	printf("Square Area Wide Value is:  %f %s \n",l," cm2.");
}
