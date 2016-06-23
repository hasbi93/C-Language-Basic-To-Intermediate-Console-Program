/*
* Title               : Simple MidPoint Line Calculator(MenghitungTitikTengahDariDuaTitik.c)
* Program Description : Calculate Line MidPoint Input from  Keyboard to Show It on the Screen.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

typedef struct
{
	float x;
	float y;
}Titik;

Titik P1, P2, P3;

main()
{	
	printf("Simple Line MidPoint Calculator Console Program \n");
	printf("Masukkan Nilai Titik P1.x dan P2.x  \n");
	scanf("%f %f", &P1.x, &P2.x);
	printf("Masukkan Nilai Titik P1.y dan P2.y \n");
	scanf("%f %f", &P1.y, &P2.y);
	P3.x=(P1.x+P2.x)/2;
	P3.y=(P1.y+P2.y)/2;
	
	printf("MidPoint Value from that Two Different Coordinate Point is: %f %f \n ", P3.x,P3.y);
	
	
}
