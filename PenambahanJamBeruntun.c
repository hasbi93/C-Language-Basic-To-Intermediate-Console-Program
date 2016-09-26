#include<stdio.h>

typedef struct
{
	long int hh,mm,ss;
}jam;

jam ja,jb,jc;
long int sisa,totalwaktu,totalwaktu2,totalwaktu3; 

main()
{
	printf("Masukkan Jam,Menit, dan Detik yang Anda Inginkan: \n");
	scanf("%ld %ld %ld",&ja.hh,&ja.mm,&ja.ss);
	printf ("Masukkan Jumlah Waktu ke Dua yang Ingin Anda Tambahkan: \n ");
	scanf("%ld %ld %ld",&jb.hh,&jb.mm,&jb.ss);
	totalwaktu=(ja.hh*3600)+(ja.mm*60)+ja.ss;
	totalwaktu2=(jb.hh*3600)+(jb.mm*60)+jb.ss;
	totalwaktu3=totalwaktu+totalwaktu2;
	jc.hh=totalwaktu3/3600;
	sisa=totalwaktu3%3600;
	jc.mm=sisa/60;
	jc.ss=sisa%60;
	printf("Waktu Total Sekarang Adalah, %ld %c %ld %c %ld  \n",jc.hh,':',jc.mm,':',jc.ss);
}

