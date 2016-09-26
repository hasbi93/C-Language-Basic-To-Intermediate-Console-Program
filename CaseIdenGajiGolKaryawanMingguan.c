#include<stdio.h>
#include<string.h>

/* PERINGATAN!!!! ADA KESALAHAN FORMAT CHAR DAN STRING DALAM METODE SWITCH YANG DILAKUKAN, SEHINGGA PROGRAM TIDAK BERJALAN DENGAN BENAR!!  */

const long int jamnormal=48;
const long int upahlembur=3000;

long int lembur,tidaklembur,jamkerja,upah,upahgolongan;
char nama[100];
char golongan[];

main()
{	
	printf("Masukkan Nama dan Jam Kerja Anda: \n");
	scanf("%s %ld",&nama,&jamkerja);
	printf("Masukkan Golongan Kerja Anda: \n");
	scanf("%s",&golongan);
	
	switch(golongan[0])
	{
		case 'a':upahgolongan=4000;break;
		case 'b':upahgolongan=5000;break;
		case 'c':upahgolongan=6000;break;
		case 'd':upahgolongan=7500;break;
		default:printf("Bukan golongan yang benar! \n");
	}
	if (jamkerja<=jamnormal)
		tidaklembur=jamnormal*upahgolongan;
	else
		lembur=((jamkerja-jamnormal)*upahlembur)+(jamnormal*upahgolongan);
	
	printf("Saudara %s %s %ld %s \n",nama," upah anda minggu ini adalah, ",upah," Rupiah.");
}
