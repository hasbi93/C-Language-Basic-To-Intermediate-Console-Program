#include<stdio.h>
#include<math.h>
#include<string.h>

long int i,j,x;
float r;

main()
{
	i=0;
	j=0;
	printf("Program Penghitung Rerata Input Angka Dari Papan Ketik. \n");
	printf("Masukkan Angka yang Anda Inginkan: \n");
	scanf("%ld",&x);
	while(x!=0)
	{
		i=i+1;
		j=j+x;
		printf("Masukkan x Selanjutnya yang Ingin Anda Tambahkan: \n");
		printf("Masukkan Angka 0 untuk Menghentikan Program. \n");
		scanf("%ld",&x);
	}
	if(i!=0)
	{
		r=(float)j/(float)i;
		printf("Rerata = %f",r);
	}
	else
	{
		printf("Tidak Ada Data yang Dimasukkan atau Input Anda Salah. \n");
	}
}
