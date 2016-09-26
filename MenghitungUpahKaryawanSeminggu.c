#include<stdio.h>

const long int waktunormal=48;

char nama[100];
long int jamkerja,lembur,upah;

main()
{
	printf("Masukkan nama dan jumlah jam kerja anda selama seminggu \n");
	scanf("%s %ld",&nama,&jamkerja);
	if (jamkerja>48)
		lembur=jamkerja-waktunormal;
		upah=(lembur*3000)+(waktunormal*2000);
	if (jamkerja<48)
		upah=waktunormal*2000;
	printf("Saudara %s %s %ld %s",nama," Gaji anda minggu ini adalah: ",upah," Rupiah.");
}
