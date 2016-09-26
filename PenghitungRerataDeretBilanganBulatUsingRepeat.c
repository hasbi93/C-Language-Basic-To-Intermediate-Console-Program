#include<stdio.h>
#include<math.h>
#include<string.h>

long int i,j,n,r,x;

main()
{	
	printf("Program Pencari Rerata Deret Bilangan Bulat \n");
	printf("Masukkan N Pengulangan yang Anda Inginkan: \n");
	scanf("%ld",&n);
	j=0;
	i=1;
	do
	{
		printf("Masukkan Bilangan Bulat yang Ingin Anda Tambahkan (X): \n)");
		scanf("%ld",&x);
		j=j+x;
		i=i+1;
		printf("Jumlah Sementara = %ld  \n",j);
	}while(i<=n);
	r=j/n;
	printf("Rerata = %ld ",r);
}
