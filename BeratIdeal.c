#include<stdio.h>
#include<math.h>
#include<string.h>

long int berat,berat0,tinggi,tinggi0;

main()
{
	printf("Untuk Menghitung Berat Badan Ideal,\nMasukkan Tinggi Badan Anda: \n");
	scanf("%ld",&tinggi);
	printf("Masukkan Berat Badan Anda. \n");
	scanf("%ld",&berat0);
	tinggi0=tinggi-100;
	berat=tinggi0-(tinggi0*0.1);
	printf("Berat ideal anda adalah: %ld kg \n",berat);
	if (berat0<=(berat+2)&&berat0>=(berat-2))
		printf("Berat anda sudah Ideal. \n ");
	else
		printf("Berat anda belum Ideal. \n");
}
