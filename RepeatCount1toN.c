#include<stdio.h>
#include<math.h>
#include<string.h>

long int i,j,n;

main()
{	
	printf("Program Penghitung Deret 1 hingga N \n");
	printf("Masukkan Jumlah Pengulangan N yang Anda Inginkan: \n");
	scanf("%ld",&n);
	i=1;
	do
	{
		j=j+i;
		i=i+1;
	}while(i<=n);
	printf("Jumlah = %ld \n",j);
}
