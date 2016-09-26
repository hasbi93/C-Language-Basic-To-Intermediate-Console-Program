#include<stdio.h>

long int x;

main()
{
	printf("Masukkan nilai x(integer) yang anda inginkan: \n");
	scanf("%ld",&x);
	if (x%2==0)
		printf("X adalah bilangan genap \n");
	else
		printf("X adalah bilangan ganjil \n");
}
