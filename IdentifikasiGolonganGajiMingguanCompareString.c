#include<stdio.h>
#include<string.h>
#include<math.h>

const long int jamnormal=48;
const long int upahlembur=3000;

long int jamkerja,upahgolongan,upah;
char nama[50];

main()
{
	char gol_A[]="A";
	char gol_a[]="a";
	char gol_b[]="b";
	char gol_B[]="B";
	char gol_c[]="c";
	char gol_C[]="C";
	char gol_d[]="d";
	char gol_D[]="D";
	char golongan[2];
	printf("Masukkan Nama dan Jam Kerja Anda: \n");
	scanf("%s %ld",&nama,&jamkerja);
	printf("Masukkan Golongan Kerja Anda: \n");
	scanf("%s",&golongan);
	
	if ((strcmp(golongan,gol_a)==0)||(strcmp(golongan,gol_A)==0))
		upahgolongan=4000;
	else
		if ((strcmp(golongan,gol_b)==0)||(strcmp(golongan,gol_B)==0))
			upahgolongan=5000;
		else
			if ((strcmp(golongan,gol_c)==0)||(strcmp(golongan,gol_C)==0))
				upahgolongan=6000;
			else
				if ((strcmp(golongan,gol_d)==0)||(strcmp(golongan,gol_D)==0))
					upahgolongan=7500;
				else
					printf("Maaf, golongan anda tidak terdaftar. \n");		
	if (jamkerja<=jamnormal)
		upah=jamnormal*upahgolongan;
	else
		upah=(((jamkerja-jamnormal)*upahlembur)	+ (jamnormal*upahgolongan));
	printf("Saudara %s %s %ld %s \n",nama," upah mingguan anda adalah, ",upah," Rupiah.");
}

	
