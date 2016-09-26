#include<stdio.h>
#include<string.h>
#include<math.h>

long int i,n;

main()
{
	printf("Masukkan Nilai N yang Anda Inginkan: \n");
	scanf("%ld",&n);
	i=1;
	do
	{
		printf("%ld \n",i);
		i=i+1;
	}while(i<=n);
}
