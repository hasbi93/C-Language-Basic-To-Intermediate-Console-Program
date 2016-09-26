#include<stdio.h>

long int x,y,z;

main()
{
	printf("Masukkan nilai x,y,z yang anda inginkan: \n");
	scanf("%ld %ld %ld",&x,&y,&z);
	if (x>y && x>z) 
		printf("X adalah bilangan terbesar, yaitu: %ld \n",x);
	else
		if(y>x && y>z)
			printf("Y adalah bilangan terbesar, yaitu: %ld \n",y);
		else
			printf("Z adalah bilangan terbesar, yaitu: %ld \n",z);
	
}
