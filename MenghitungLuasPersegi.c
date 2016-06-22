/*
* Title               : Console Program Basic Square Calculators(MenghitungLuasPersegi.c)
* Program Description : Calculate Wide of Square Using Arithmetic Multiplication between Length and Wide Input from Keyboard
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

main()
{
	float panjang; //length (m)
	float lebar; //width (m)
	float luas; //wide (m2) (square meter)
	
	printf("Basic Console Program:Square Wide Calculator \n");
	printf("Masukkan nilai dari panjang persegi: \n");
	scanf("%f", &panjang);
	printf("Masukkan nilai dari lebar persegi: \n");
	scanf("%f", &lebar);
	
	luas=panjang*lebar;
	
	printf("Luas persegi tersebut adalah = %f (m2) Square Meter \n", luas);

}
