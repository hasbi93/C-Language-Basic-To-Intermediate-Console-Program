/*
* Title               : Unit (Meter) Converter from Metric to British (KonversiPanjangBendaMetriksToBritish.c)
* Program Description : To Convert Meter Unit from Metric to British Unit using C Lang. Code
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<math.h>
#include<stdio.h>

typedef struct
{
	float yard,feet,inch,sisa3;
}jarak;

jarak j;
float x,sisa,sisa2;

float main()
{
	printf("Unit (Meter) Converter from Metric to British Console Program \n");
	printf("Masukkan nilai panjang benda (dalam meter): \n");
	scanf("%f",&x);
	
	j.yard=x*0.9144;
	sisa=fmod(x,0.9144);
	j.feet=sisa/(30.0+(48.0/100.0));
	sisa2=fmod(sisa,(30.0+(48.0/100.0)));
	j.inch=sisa2/(25.0+(4.0/10.0));
	j.sisa3=fmod(sisa2,(25.0+(4.0/10.0)));
	
	printf("Hasil konversi panjang benda adalah: %f %s %f %s %f %s \n",j.yard," Yard",j.feet," Feet",j.inch," Inch,");
}
