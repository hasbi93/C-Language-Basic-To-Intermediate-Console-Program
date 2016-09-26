#include<stdio.h>

float nilai_ujian;

main()
{
	printf("Masukkan nilai ujian anda: \n");
	scanf("%f",&nilai_ujian);
	
	if (nilai_ujian>=80)
		printf("Nilai anda adalah A. \n");
	else
		if(nilai_ujian < 80 && nilai_ujian >= 70)
			printf("Nilai anda adalah B. \n");
		else
			if(nilai_ujian < 70 && nilai_ujian>= 55)
				printf("Nilai anda adalah C. \n");
			else
				if(nilai_ujian < 55 && nilai_ujian >=40)
					printf("Nilai anda adalah D. \n");
				else
					printf("Nilai anda adalah E. \n");
		
}


