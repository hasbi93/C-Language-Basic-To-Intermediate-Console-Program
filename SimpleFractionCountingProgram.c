#include<stdio.h>

long int x;
double s;

main()
{
	printf("Fraction Counting Program Using While Method \n");
	printf("Masukkan x dari 1/x yang Anda Ingin Jumlahkan: \n");
	scanf("%ld",&x);
	s=1/(double)x;
	printf("S (Total Pecahan) = %lf",s);
}
