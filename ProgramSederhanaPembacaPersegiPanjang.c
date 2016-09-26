#include<stdio.h>
#include<math.h>

long int pilihan,panjang,lebar,keliling,luas,diagonal;

main()
{
	printf("Program Rumus Persegi Panjang \n Masukkan Pilihan yang Anda Inginkan: \n Ingat, Hanya Gunakan Bilangan Bulat. \n 1.Hitung Luas \n 2.Hitung Keliling \n 3.Hitung Panjang Diagonal \n 4.Keluar Program \n");
	scanf("%ld",&pilihan);
	switch (pilihan)
		{
			case 1:
					{
						printf("Masukkan Panjang dan Lebar Persegi Panjang: \n");
						scanf ("%ld %ld",&panjang,&lebar);
						luas=panjang*lebar;
						printf("Luas dari persegi empat tersebut adalah: %ld %s \n",luas," Cm2.");
					};break;
			case 2:
					{
						printf("Masukkan Panjang dan Lebar Persegi Panjang: \n");
						scanf ("%ld %ld",&panjang,&lebar);
						keliling=(2*panjang)+(2*lebar);
						printf("Keliling dari persegi panjang tersebut adalah: %ld %s \n",keliling," Cm.");
					};break;
			case 3:
					{
						printf("Masukkan Panjang dan Lebar dari Persegi Panjang: \n");
						scanf ("%ld %ld",&panjang,&lebar);
						diagonal=(sqrt(panjang*panjang)+(lebar*lebar));
						printf("Panjang Diagonal dari Persegi Panjang Tersebut adalah: %ld %s \n",diagonal," Cm.");
					};break;
			case 4:printf("Silahkan Tekan Enter Sekali Lagi. \n");break;
			default:printf("Anda Memasukkan Pilihan Yang Salah. \n");
		}
}

