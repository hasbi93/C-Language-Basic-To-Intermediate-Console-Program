/*
* Title               : Console Program Basic Square Calculators(MenghitungLuasPersegi.c)
* Program Description : Calculate Wide of Square Using Arithmetic Multiplication between Length and Wide Input from Keyboard
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include <stdio.h>

const int  length= 10;
const int  width= 5;
const char newline = '\n';

int volume;  
int height;
   
main() 
{
	printf("Console Program Exercise:Example of Using Constant in C Lang. \n");
	printf("Please Use Only Positive Integer Number. \n");
	printf("Masukkan Tinggi Bangunan: \n");
	scanf("%d", &height);
   
	volume = length*width*height;
	printf("Volume Value: %d",volume);
	printf("%c", newline);

}
