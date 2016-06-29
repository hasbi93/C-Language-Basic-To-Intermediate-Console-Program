/*
* Title               :Day Differences Counter Console Program (MenghitungSelisihKeduaHari.c)
* Program Description : To Calculate Difference Time Between Two Different Day
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include <stdio.h>

typedef struct
{
	long int dd,mm,yy;
}waktu;

waktu w1,w2,w3;
long int totalhari1,totalhari2,totalhari3,sisa;

main()
{
	printf("Day Differences Counter Console Program \n");
	printf("Please Insert Only Positive Integer Number \n");
	printf("Masukkan hari(dd),bulan(mm),dan tahun(yy) awal: \n");
	scanf("%ld %ld %ld",&w1.dd,&w1.mm,&w1.yy);
	printf("Masukkan hari(dd), bulan(mm), dan tahun(yy) akhir: \n");
	scanf("%ld %ld %ld",&w2.dd,&w2.mm,&w2.yy);
	
	totalhari1=(w1.yy*365)+(w1.mm*30)+w1.dd;
	totalhari2=(w2.yy*365)+(w2.mm*30)+w2.dd;
	totalhari3=totalhari2-totalhari1;
	
	w3.yy=totalhari3/365;
	sisa=totalhari3%365;
	w3.mm=sisa/30;
	w3.dd=sisa%30;
	
	printf("Selisih kedua waktu tersebut adalah: %ld %s %ld %s %ld %s \n",w3.yy," Tahun ",w3.mm," Bulan ",w3.dd," Hari.");
	
}

