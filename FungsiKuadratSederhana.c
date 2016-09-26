#include<stdio.h>
#include<math.h>

float a,hasil;

main()
{
	printf("Masukkan Bilangan yang Ingin Anda Quadratkan. \n");
	scanf("%f",&a);
	hasil=pow(a,2);
	printf("Kuadrat dari Bilangan yang Anda Masukkan Adalah: %f \n",hasil);
}
