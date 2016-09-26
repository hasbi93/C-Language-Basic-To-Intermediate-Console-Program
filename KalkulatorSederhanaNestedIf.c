#include<stdio.h>
#include<math.h>
#include<string.h>

const char a[2]="+";
const char b[2]="-";
const char c[2]="*";
const char d[2]="/";
const char e[2]="%";

float angka1,angka2,hasil;
char symbol[2];

main()
{
	printf("Masukkan Angka Pertama Anda: \n");
	scanf("%f",&angka1);
	printf("Masukkan Jenis Operasi Yang Anda Inginkan: \n + \n - \n * \n (Div(/)) \n (mod )\n ");
	scanf("%s",&symbol);
	printf("Masukkan Angka Kedua Anda: \n");
	scanf("%f",&angka2);
	if (strcmp(symbol,a)==0)
		hasil=angka1+angka2;
	else
		if (strcmp(symbol,b)==0)
			hasil=angka1-angka2;
		else
			if(strcmp(symbol,c)==0)
				hasil=angka1*angka2;
			else
				if((strcmp(symbol,d)==0) && (angka2!=0))
					hasil=angka1/angka2;
				else
					printf("Angka Kedua Yang Anda Masukkan Salah!! \n");
					if((strcmp(symbol,e)==0) && (angka2!=0))
						hasil=fmod(angka1,angka2);
					else
						if (angka2==0)
							printf("Error! \n");
						else
							printf("Symbol yang anda masukkan Salah!! \n ");
	printf("Hasil:  %f \n",hasil);						
}
