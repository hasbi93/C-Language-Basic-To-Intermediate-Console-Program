#include<stdio.h>
#include<string.h>

const long int jamnormal=48;
const long int upahlembur=3000;

char nama[50];
char golongan[2];
long int jamkerja,upahgolongan,upah;

main()
{
	char golongan_a[]="a";
	char golongan_A[]="A";
	char golongan_b[]="b";
	char golongan_B[]="B";
	char golongan_c[]="c";
	char golongan_C[]="C";
	char golongan_d[]="d";
	char golongan_D[]="D";

	printf("Masukkan nama dan jam kerja anda: \n");
	scanf("%s %ld",&nama,&jamkerja);
	printf("Masukkan golongan anda: \n");
	scanf("%s",&golongan);
	if ((strcmp(golongan,golongan_a)==0)||(strcmp(golongan,golongan_A)==0))
		upahgolongan=4000;
	else
		if ((strcmp(golongan,golongan_b)==0)||(strcmp(golongan,golongan_B)==0))
			upahgolongan=5000;
		else
			if((strcmp(golongan,golongan_c)==0)||(strcmp(golongan,golongan_C)==0))
				upahgolongan=6000;
			else
				if((strcmp(golongan,golongan_d)==0)||(strcmp(golongan,golongan_D)==0))
					upahgolongan=7500;
				else
					printf("Maaf Golongan Anda Tidak Terdaftar. \n");
	if (jamkerja<=jamnormal)
		upah=(jamnormal*upahgolongan);
	else
		upah=((jamkerja-jamnormal)*upahlembur)+(jamnormal*upahgolongan);
	printf("Saudara %s %s %ld %s \n",nama," upah mingguan anda adalah ",upah," Rupiah.");	
}		

