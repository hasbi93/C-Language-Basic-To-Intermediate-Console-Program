#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct
{
	long int dualima,limapuluh,seratus,duaratus,limaratus,seribu,duaribu,limaribu,sepuluhribu,duapuluhribu,limapuluhribu,seratusribu;	
}pec;

pec p;

long int uang,sisa,sisa2,sisa3,sisa4,sisa5,sisa6,sisa7,sisa8,sisa9,sisa10,sisa11,pembulatan,uang2;

main()
{
	printf("Masukkan Total Jumlah Belanja Anda. \n");
	scanf("%ld",&uang);
	p.seratusribu=uang/100000;
	sisa=uang%100000;
	p.limapuluhribu=sisa/50000;
	sisa2=sisa%50000;
	p.duapuluhribu=sisa2/20000;
	sisa3=sisa2%20000;
	p.sepuluhribu=sisa3/10000;
	sisa4=sisa3%10000;
	p.limaribu=sisa4/5000;
	sisa5=sisa4%5000;
	p.duaribu=sisa5/2000;
	sisa6=sisa5%2000;
	p.seribu=sisa6/1000;
	sisa7=sisa6%1000;
	p.limaratus=sisa7/500;
	sisa8=sisa7%500;
	p.duaratus=sisa8/200;
	sisa9=sisa8%200;
	p.seratus=sisa9/100;
	sisa10=sisa9%100;
	p.limapuluh=sisa10/50;
	sisa11=sisa10%50;
	p.dualima=sisa11/25;
	pembulatan=sisa11%25;
	uang2=(p.seratusribu*100000)+(p.limapuluhribu*50000)+(p.duapuluhribu*20000)+(p.sepuluhribu*10000)+(p.limaribu*5000)+(p.duaribu*2000)+(p.seribu*1000)+(p.limaratus*500)+(p.duaratus*200)+(p.seratus*100)+(p.limapuluh*50)+(p.dualima*25);
	printf("Total Biaya Belanja Anda Setelah Pembulatan ke Angka Terdekat adalah,Rp. %ld \n");
}
