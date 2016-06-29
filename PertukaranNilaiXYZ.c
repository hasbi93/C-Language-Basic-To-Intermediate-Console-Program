/*
* Title               : X,Y,Z Exchange Value Console Program (PertukaranXYZ.c)
* Program Description : To Show Exchange Mechanism Between X,Y,and Z Value using C Language Code
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

long int x,y,z,sisa;

main()
{
	printf("X,Y,Z Value Exchanger Console Program \n");
	printf("Please Insert Positive Integer Number Only \n");
	printf("Masukkan nilai x,y, dan z: \n");
	scanf("%ld %ld %ld",&x,&y,&z);
	printf("Nilai x, y,z adalah %ld %ld %ld \n",x,y,z);
	printf("Memulai operasi pertukaran x,y,z menjadi y,z,x \n");

	sisa=x;
	x=y;
	y=z;
	z=sisa;
	
	printf("Nilai x,y,z sekarang adalah: %ld %ld %ld \n ",x,y,z);
	
	
}
