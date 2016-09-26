#include<stdio.h>
#include<string.h>
#include<math.h>

long int nomormenu;

main()
{	
	printf("Program Simulasi Pemilihan Nomor Menu \n");
	do
	{
		printf("Menu \n");
		printf("1.Baca Data \n");
		printf("2.Ubah Data \n");
		printf("3.Cetak Data \n");
		printf("4.Hapus Data \n");
		printf("5.Keluar Program \n");
		
		scanf("%ld",&nomormenu);
		switch(nomormenu)
		{
			case 1:printf("Anda Memilih Menu Nomor 1 \n");break;
			case 2:printf("Anda Memilih Menu Nomor 2 \n");break;
			case 3:printf("Anda Memilih Menu Nomor 3 \n");break;
			case 4:printf("Anda Memilih Menu Nomor 4 \n");break;
			case 5:printf("Keluar Program \n");break;
			default:printf("Input Salah \n");
		}
	}while(nomormenu!=5);
}
