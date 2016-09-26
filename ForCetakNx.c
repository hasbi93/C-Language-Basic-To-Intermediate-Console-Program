#include<stdio.h>
#include<math.h>
#include<string.h>

long int i,n;

main()
{
	printf("Masukkan Jumlah Pengulangan yang Anda Inginkan: \n");
	scanf("%ld",&n);
	for (i=1;i<=n;i=i+1)
		printf("%ld \n",i);
}
