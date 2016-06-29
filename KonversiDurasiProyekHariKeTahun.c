/*
* Title               :Project Time Duration Counter and Converter (KonversiDurasiProyekHariKeTahun.c)
* Program Description : To Calculate and Convert Project Time Duration from Day to Year.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/


#include<stdio.h>

typedef struct
{
	long int dd,mm,yy;
}waktu;

	waktu w;

	long int hari,bulan,tahun,sisa;

main()
{
	printf("Project Time Duration Counter and Converter Console Program \n");
	printf("Please Insert Positive Integer Number Only \n");
	printf("Please Insert Total Project Day: \n");
	scanf("%ld",&hari);
	w.yy=hari/365;
	sisa=hari% 365;
	w.mm=sisa/30;
	w.dd=sisa%30;
	printf("Complete Project Time is: %ld %s %ld %s %ld %s \n",w.yy," Tahun ",w.mm," Bulan ",w.dd," Hari.");
}

