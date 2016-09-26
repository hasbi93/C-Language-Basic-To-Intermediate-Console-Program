#include<stdio.h>

int pilihan;

main()
{
	printf("Masukkan Angka Pilian Anda: \n 1.Baca Data \n 2.Cetak Data \n 3.Ubah Data \n 4.Hapus Data \n 5.Keluar Program \n");
	scanf("%d",&pilihan);
	switch (pilihan)
		{
			case 1:printf("Anda Memilih Baca Data. \n");break;
			case 2:printf("Anda Memilih Cetak Data. \n");break;
			case 3:printf("Anda Memilih Ubah Data. \n");break;
			case 4:printf("Anda Memilih Hapus Data. \n");break;
			case 5:printf("Anda Memilih Keluar Program. \n");break;
			default:printf("Bukan Pilihan Yang Benar. \n");
		}
	return 0;
}
