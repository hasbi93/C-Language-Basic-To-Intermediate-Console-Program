#include<stdio.h>

long int i,j,n;

main()
{	
	i=1;
	n=0;
	printf("Masukkan Jumlah Pengulanga N Baris Bintang yang Diinginkan: \n");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;++j)
		{
			printf("* ");
		}
		printf("\n");
	}
}
