#include<stdio.h>

float air;

main()
{
	printf("Masukkan suhu air yang ada: \n");
	scanf("%f",&air);
	if (air<0)
		printf("Pada suhu %f %s \n",air," air berwujud padat.");
	else
		if (air>100)
			printf("Pada suhu %f %s \n",air," air berwujud gas.");
		else
			printf("Pada suhu %f %s \n",air," air berwujud cair.");
}
