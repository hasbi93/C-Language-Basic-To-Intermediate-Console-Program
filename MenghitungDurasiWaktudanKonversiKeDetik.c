/*
* Title               : Time Duration Counter and Converter to Second (MenghitungDurasiWaktudanKonversiKeDetik.c)
* Program Description : To Calculate Time Duration and Convert It to Second Written in C Language Code.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

typedef struct
{
	long int hh,mm,ss;
}jam;

jam j1,j2,j3;
long int totalwaktu1,totalwaktu2,totalwaktu3;
long int sisa;

main()
{
	printf("Time Duration Counter and Converter Console Program \n");
	printf("masukkan nilai dari waktu awal (hh:mm:ss) \n");
	scanf("%ld %ld %ld",&j1.hh,&j1.mm,&j1.ss);
	printf("masukkan nilai dari waktu akhir (hh:mm:ss) \n");
	scanf("%ld %ld %ld",&j2.hh,&j2.mm,&j2.ss);
	
	totalwaktu1=(j1.hh*3600)+(j1.mm*60)+j1.ss;
	totalwaktu2=(j2.hh*3600)+(j2.mm*60)+j2.ss;
	totalwaktu3=totalwaktu2-totalwaktu1;
	
	j3.hh=totalwaktu3/3600;
	sisa=totalwaktu3%3600;
	j3.mm=sisa/60;
	j3.ss=sisa%60;
	
	printf("durasi waktu anda adalah: %ld %s \n",totalwaktu3," Detik.");
	printf("durasi waktu anda adalah: %ld %s %ld %s %ld %s \n",j3.hh," Jam",j3.mm," Menit",j3.ss," Detik.");
}
