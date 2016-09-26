#include<stdio.h>
#include<math.h>

long int x,y;

main()
{
	printf("Masukkan x dan y yang anda inginkan: \n");
	scanf("%ld %ld",&x,&y);
	if (x>0 && y>0)
		printf("Titik %c %ld %c %ld %c %s \n",'(',x,',',y,')'," terletak pada Kuadran I.");
	else
		if(x<0 && y>0)
			printf("Titik %c %ld %c %ld %c %s \n",'(',x,',',y,')'," terletak pada Kuadran II.");
		else
			if(x<0 && y<0)
				printf ("Titik %c %ld %c %ld %c %s \n",'(',x,',',y,')'," terletak pada Kuadran III.");
			else
				printf ("Titik %c %ld %c %ld %c %s \n",'(',x,',',y,')'," terletak pada Kuadran IV.");
}
