#include<stdio.h>

int angka;

main()
{
	printf("Masukkan angka yang anda pilih (angka 1-4) : \n");
	scanf("%d",&angka);
	switch (angka)
	{
		case 1:printf("Angka yang anda pilih adalah Angka Satu \n");break;
		case 2:printf("Angka yang anda pilih adalah Angka Dua \n");break;
		case 3:printf("Angka yang anda pilih adalah Angka Tiga \n");break;
		case 4:printf("Angka yang anda pilih adalah Angka Empat \n");break;
		default:printf("Bukan Angka Yang Benar. \n");
	}
	
}
