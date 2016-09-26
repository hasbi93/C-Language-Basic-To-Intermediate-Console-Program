#include<stdio.h>
#include<math.h>

float a,b,c;

main()
{
	printf("masukkan nilai (float) yang ingin dicari modulusnya secara berurutan (a mod b): \n");
	printf("nilai a harus lebih besar dari b dan keduanya merupakan bilangan real(float)\n");
	scanf("%f %f",&a,&b);
	c=fmod(a,b);
	printf("nilai modulusnya adalah: %f \n",c);
	
}
