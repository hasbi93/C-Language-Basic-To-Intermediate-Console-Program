#include<stdio.h>

long int i,n,j;

main()
{
	j=0;
	printf("Masukkan N Pengulangan: \n");
	scanf("%ld",&n);
	for (i=1; i<=n; i=i+1)
		{
			j=j+i;
			printf("%ld \n",j);
		}
}
