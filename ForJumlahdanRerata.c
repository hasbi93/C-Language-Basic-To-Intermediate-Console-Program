#include<stdio.h>
#include<string.h>
#include<math.h>

long int i,j,m,n,r,x;

main()
{
	printf("Program Penghitung Rerata dari Jumlah Bilangan yang Dimasukkan: \n");
	printf("Masukkan N Perulangan: \n");
	scanf("%ld",&n);
	j=0;
	for(i=1;i<=n;i=i+1)
		{
			printf("Masukkan Angka yang Anda Inginkan: \n");
			scanf("%ld",&x);
			j=j+x;
			printf("jumlah sementara: %ld \n",j);
		}
	r=j/n;
	m=j%n;
	printf("Rerata Akhir  (%ld %s %ld)  = %ld , mod/sisa (%ld %s %ld) = %ld",j," : ",n,r,j,"mod(%)",n,m);
}
