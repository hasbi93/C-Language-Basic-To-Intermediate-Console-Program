#include<stdio.h>

long int bilbul;

main()
{
	printf("Masukkan Bilangan Bulat Positif yang Anda Inginkan. \n");
	scanf("%ld",&bilbul);
	if (bilbul%4==0)
		printf("Bilangan tersebut habis dibagi 4. \n");
	else
		printf("Bilangan tersebut, tidak habis dibagi 4. \n");
		
}
