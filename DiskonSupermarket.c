#include<stdio.h>
#include<math.h>
#include<string.h>

float harga,hargaakhir,persendiskon,hargadiskon;
int diskon;

main()
{
	printf("Masukkan Besaran Total Belanja. \n");
	scanf("%f",&harga);
	printf("Masukkan Besaran Diskon (Gunakan Bilangan Bulat Positif Saja, Ex:15% = 15)\n");
	scanf("%d",&diskon);
	persendiskon=diskon/100.0;
	if (harga>100000)
		hargadiskon=harga*persendiskon,hargaakhir=harga-hargadiskon,	printf("Total Harga Belanja Anda adalah, %f %s %d %s \n",hargaakhir,"Rupiah. Anda mendapatkan Diskon Sebesar, ",diskon,"%.");
	else
		printf("Total Belanja Anda Adalah, %f %s \n",harga,"Rupiah, Maaf anda tidak mendapatkan diskon.");		
}
