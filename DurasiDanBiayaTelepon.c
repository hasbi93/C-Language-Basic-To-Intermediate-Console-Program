/*
* Title               : Traditional Telephone Charge Console Program (DurasiDanBiayaTelepon.c)
* Program Description : C Lang. Code that Calculate the Duration and Amount of Telephone Charges.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

typedef struct
{
	long int hh,mm,ss;
}Jam;

Jam j1,j2,j3;
long int totaldetik1,totaldetik2,totaldetik3;
long int sisa;
long int durasiperpulsa;
long int biaya;
const int pulsa =5;
const int tarifperpulsa =150;

main()
{	
	printf("Traditional Telephone Charge Console Program \n");
	printf("Please, Use Positive Integer Number Only \n");
	printf("Please Remember; 1 Pulse=5 Seconds; 1 Pulse=Rp 150.00 \n");
	printf("Please Input the Initial Time Call: (Hour):(Minutes):(Seconds) \n");
	scanf("%ld %ld %ld", &j1.hh, &j1.mm, &j1.ss);
	
	printf("Please Input the End of Time Call: (Hours):(Minutes):(Seconds) \n");
	scanf("%ld %ld %ld", &j2.hh, &j2.mm, &j2.ss);
	
	totaldetik1=(j1.hh*3600)+(j1.mm*60)+j1.ss;
	totaldetik2=(j2.hh*3600)+(j2.mm*60)+j2.ss;
	totaldetik3=totaldetik2-totaldetik1;
	
	j3.hh=totaldetik3/3600;
	sisa=totaldetik3%3600;
	j3.mm=sisa/60;
	j3.ss=sisa%60;
	
	durasiperpulsa=totaldetik3/pulsa;
	biaya=durasiperpulsa*tarifperpulsa;
	
	printf("Your Telephone Duration is: %ld %s %ld %s %ld %s \n" ,j3.hh," Jam ",j3.mm," Menit ",j3.ss," Detik.");
	printf("Your Total Telephone Charge is: %ld %s \n",biaya," Rupiah.");
	
}


