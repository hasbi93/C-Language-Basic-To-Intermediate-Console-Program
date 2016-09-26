#include<stdio.h>
#include<string.h>
#include<math.h>

long int i;
char c[99];

main()
{
	i=1;
	printf("Program Console Cetak Input Data Tak Hingga ke Layar \n");
	printf("Masukkan Karakter yang Ingin Anda Cetak di Layar Komputer: \n");
	scanf("%s",&c);
	while(i!=0)
	{
		printf("Input Data anda adalah: %s \n",c);
		printf("Masukkan Angka 0 Jika Anda Ingin Mengakhiri Program dan Masukkan Angka Selain 0 untuk Meneruskan Program : \n");
		scanf("%ld",&i);
		printf("Masukkan Karakter yang Ingin Anda Cetak di Layar Komputer: \n");
		scanf("%s",&c);
	}
}

