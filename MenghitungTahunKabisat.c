#include<stdio.h>
#include<math.h>

long int tahun;

main()
{
	printf("Masukkan tahun yang anda inginkan: \n");
	scanf("%ld",&tahun);
	if ((tahun%4==0 && tahun%100!=0) ||(tahun%400==0))
		printf("Tahun %ld %s \n",tahun," adalah tahun kabisat.");
	else
		printf("Tahun %ld %s \n",tahun," adalah bukan tahun kabisat.");
	
}
