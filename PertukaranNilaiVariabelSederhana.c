/*
* Title               : Variable Exchange Exercise(PertukaranNilaiVariabelSederhana.c)
* Program Description : Exercise Exchange of Variable Value, The Basic of C Programming Language
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("masukkan nilai a= \n");
	scanf("%d", &a);
	printf("A= %d \n",a);
	printf("masukkan nilai b= \n");
	scanf("%d", &b);
	printf("B= %d \n",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("Exchanging The Value of Two Variable \n");
	printf("nilai A sekarang adalah= %d \n",a);
	printf("nilai B sekarang adalah= %d \n",b);
}
