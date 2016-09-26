#include<stdio.h>
#include<math.h>
#include<string.h>

long int x;
double s;

main()
{
	s=0;
	printf("Program Penjumlah Deret Pecahan \n");
	printf("Masukkan x yang Anda Inginkan dari 1/x: \n");
	scanf("%d",&x);
	while(x!=0)
	{
		s=s+(1/(double)x);
		printf("Masukkan Kembali 1/x yang Anda Inginkan: \n");
		scanf("%d",&x);
	}
	printf("S= %lf",s);
}
