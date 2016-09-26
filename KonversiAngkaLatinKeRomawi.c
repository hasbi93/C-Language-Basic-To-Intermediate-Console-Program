#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct
{
	long int i,v,x,l,c,d,m;
}rom;


rom r;
long int angka,angka2,sisa,sisa2,sisa3,sisa4,sisa5;

main()
{
	printf("Masukkan Angka Yang Ingin Anda Konversikan ke Romawi. \n");
	scanf("%ld",&angka);
	
	r.m=angka/1000;
	sisa=angka%1000;
	r.d=sisa/500;
	sisa2=sisa%500;
	r.c=sisa2/100;
	sisa3=sisa2%100;
	r.l=sisa3/50;
	sisa4=sisa3%50;
	r.x=sisa4/10;
	sisa5=sisa4%10;
	r.v=sisa5/5;
	r.i=sisa5%5;
	
	printf("%ld %s  %ld %s %ld %s %ld %s %ld %s %ld %s %ld %s",r.m,"M",r.d,"D",r.c,"C",r.l,"L",r.x,"X",r.v,"V",r.i,"I");

}
