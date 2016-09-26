#include<stdio.h>
#include<math.h>

float x;

main()
{
	printf("Masukkan bilangan yang anda inginkan: \n");
	scanf("%f",&x);
	if (x>0)
		printf("Bilangan %f %s \n",x," adalah lebih besar dari nol.");
	else
		if (x<0)
			printf("Bilangan %f %s \n",x," adalah kurang dari nol.");
		else
			printf("Bilangan %f %s \n",x," adalah nol.");
}
