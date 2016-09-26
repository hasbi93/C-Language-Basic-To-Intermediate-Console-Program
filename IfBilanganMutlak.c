#include<stdio.h>

float x;

main()
{
	printf("Masukkan nilai yang anda inginkan \n");
	scanf("%f",&x);
	if (x=<0)
		x=-x;
	printf("Nilai dari x sekarang adalah: %f \n",x);
		
}
