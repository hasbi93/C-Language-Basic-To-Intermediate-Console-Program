#include<stdio.h>

long int angka;

main()
{
	printf("Program Pembaca Bilangan Bulat Bertipe Genap. \n");
	printf("Masukkan angka yang anda inginkan: \n");
	scanf("%ld",&angka);
	switch (angka%2==0)
	{
	case 1:printf("Angka yang anda masukkan merupakan bilangan genap. \n");break;
	case 0:printf("Angka yang anda masukkan merupakan bilangan ganjil. \n");break;
	default:printf("Angka yang anda masukkan bukan merupakan bilangan bulat. \n");
	}
}
