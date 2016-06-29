/*
* Title               : Modulus Computer Console Program (ModulusExercise.c)
* Program Description : To Calculate Modulus from Mathematical Division Operation
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>
#include<math.h>

float a,b,c;

main()
{
	printf("Modulus Computer Console Program \n");
	printf("Masukkan nilai (float) yang ingin dicari modulusnya secara berurutan (a mod b): \n");
	printf("Nilai a harus lebih besar dari b dan keduanya merupakan bilangan real(float)\n");
	scanf("%f %f",&a,&b);
	c=fmod(a,b);
	printf("Nilai modulusnya adalah: %f \n",c);
	
}
