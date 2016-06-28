/*
* Title               : Hello Name (Greeting) Console Program (ProgramSapa.c)
* Program Description : To Show How Greeting Console Program Written in C Language Code Works.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

char nama[100];

main()
{	
	printf("Hello Name (Greeting) Console Program \n");
	printf("Please Insert Your Name: \n");
	scanf("%s",&nama);
	printf("Nice to Meet You  %s \n",nama);
}
