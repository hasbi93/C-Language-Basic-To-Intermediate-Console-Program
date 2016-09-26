#include<stdio.h>
#include<math.h>

float tinggi,konstantaberat,beratideal;

float main()
{
	printf("Masukkan tinggi badan anda: \n");
	scanf("%f",&tinggi);
	konstantaberat=tinggi-100.0;
	beratideal=konstantaberat-(konstantaberat*0.1);
	printf("Berat ideal anda adalah: %f %s \n",beratideal," Kg.");
	
}
