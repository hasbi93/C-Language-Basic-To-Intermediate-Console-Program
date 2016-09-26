#include<stdio.h>

float x,y;

main()
{
	printf("Masukkan nilai yang ingin anda bandingkan, x dan y \n");
	scanf("%f %f",&x,&y);
	if (x>y)
		printf("Bilangan %f %s %f \n",x," lebih besar daripada bilangan ",y);
	else
		printf("Bilangan %f %s %f \n",y," lebih besar daripada bilangan ",x);
}
