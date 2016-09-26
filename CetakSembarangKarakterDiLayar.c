#include<stdio.h>
#include<string.h>
#include<math.h>

long int i,n;
char c[99];

main()
{
	i=1;
	n=0;
	printf("Program Console Pencetak Input pada Layar Komputer Sejumlah N \n");
	printf("Masukkan Jumlah Pengulangan N Input Data yang Anda Inginkan: \n");
	scanf("%ld",&n);
	for (i=1;i<=n;i++)
	{
	printf("Masukkan Karakter yang Ingin Anda Cetak di Layar Komputer: \n");
	scanf("%s",&c);	
	printf("Karakter Anda adalah: %s \n",c);
	i=i+1;
	}
}
