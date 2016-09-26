#include<stdio.h>
#include<math.h>
#include<string.h>

float A,B,C,hasil,hasil2,hasil3;

main()
{
	printf("Masukkan Panjang dari 3 Sisi dari Suatu Segitiga , untuk Mengetahui Jenis Sudutnya. \n");
	scanf("%f %f %f",&A,&B,&C);
	hasil=pow(A,2);
	hasil2=pow(B,2);
	hasil3=pow(C,2);
	if(hasil<=(hasil2+hasil3))
		printf("Sudut Lancip di A. \n");
	else
		if (hasil2<=(hasil+hasil3))
			printf("Sudut Lancip di B. \n");
		else
			if(hasil3<=(hasil+hasil2))
				printf("Sudut Lancip di C. \n");
			else
				printf("...................... \n");
	if(hasil>=(hasil2+hasil3))
		printf("Sudut Tumpul di A. \n");
	else
		if(hasil2>=(hasil+hasil3))
			printf("Sudut Tumpul di  B. \n");
		else
			if(hasil3>=(hasil+hasil2))
				printf("Sudut Tumpul di C. \n");
			else
				printf("...................... \n");
	if(hasil==(hasil2+hasil3))
		printf("Sudut Siku-Siku di A. \n");
	else
		if(hasil2==(hasil+hasil3))
			printf("Sudut Siku-Siku  di B. \n");
		else
			if (hasil3==(hasil+hasil2))
				printf("Sudut Siku-Siku di C. \n");
			else
				printf("...................... \n");
}
