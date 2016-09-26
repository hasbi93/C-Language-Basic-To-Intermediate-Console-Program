#include<stdio.h>
#include<math.h>
#include<string.h>

long int i,j,n;

main()
{
	i=1;
	n=0;
	j=0;
	printf("Program Console Penghitung Deret Bilangan Bulat Ganjil Bernilai Positif Sejumlah N: \n");
	printf("Masukkan N Pengulangan yang Anda Inginkan: \n");
	scanf("%ld",&n);
	while(j<(n*n))
	{
		j=j+i;
		i=i+2;
		printf("j sementara=%ld \n",j);
	}
	printf("Jumlah Deret = %ld",j);
}

