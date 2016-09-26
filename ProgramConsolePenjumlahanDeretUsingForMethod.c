#include<stdio.h>
#include<string.h>
#include<math.h>

long int i,n,j;

main()
{	
	printf("Program Penjumlahan Deret 1 to N \n");
	printf("Masukkan N Pengulangan yang Anda Inginkan: \n");
	scanf("%ld",&n);
	j=0;
	for(i=1;i<=n;i=i+1)
	{
		j=j+i;
	}
	printf("Jumlah Deret = %ld \n",j);
	printf("Now Using While Method \n");
	printf("Masukkan N Pengulangan yang Anda Inginkan: \n");
	scanf("%ld",&n);
	j=0;
	i=1;
	while(i<=n && i>=0)
	{
		j=j+i;
		i=i+1;
	}
	printf("Jumlah Deret = %ld \n",j);
	printf("Now Using Repeat Method \n");
	printf("Masukkan N Pengulangan yang Anda Inginkan: \n");
	scanf("%ld",&n);
	j=0;
	i=1;
	do
	{
		j=j+i;
		i=i+1;
	}while(i<=n && i>=0);
	printf("Jumlah Deret = %ld \n",j);
}
