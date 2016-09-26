#include<stdio.h>
#include<math.h>
#include<string.h>

long int i,n,j;

main()
{
	 i=1;
	 n=5;
	 j=0;
	 printf("Program Console Contoh Penghitung Deret Bilangan Bulat Ganjil Positif Sejumlah N=5 \n");
	 while(j<(n*n))
	 {
	 	j=j+i;
	 	i=i+2;
		printf("j sementara=%ld \n",j);
	 }
}
