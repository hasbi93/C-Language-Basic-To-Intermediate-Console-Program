#include<stdio.h>
#include<string.h>
#include<math.h>

long int pixel;

main()
{
	printf("Masukkan Nilai Pixel yang Anda Miliki: \n");
	scanf("%ld",&pixel);
	if (pixel<=0)
		pixel=0;
	else
		if(pixel>=255)	
			pixel=255;
		else
			pixel=pixel;
	printf("%ld",pixel);
}
