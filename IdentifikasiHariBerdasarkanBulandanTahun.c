#include<stdio.h>

int nomorbulan,jumlahhari,tahun;

main()
{
	printf("Masukkan nomor bulan dan tahun  yang anda inginkan: \n");
	printf("Ingat, gunakan hanya bilangan bulat saja. \n");
	scanf("%d %d",&nomorbulan,&tahun);
	switch (nomorbulan)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
							{
								jumlahhari=31;
								printf("Jumlah hari pada bulan tersebut adalah, %d \n",jumlahhari);
							};break;
		case 4:
		case 6:
		case 9:
		case 11:
							{
								jumlahhari=30;
								printf("Jumlah hari pada bulan tersebut adalah, %d \n",jumlahhari);
							};break;
		case 2:				
							{
								if ((tahun % 4==0 && tahun % 100 !=0)||(tahun % 400==0))
										jumlahhari=29;
								else
										jumlahhari=28;
								if (jumlahhari==28)
										printf("Jumlah hari pada bulan tersebut adalah, %d \n",jumlahhari);
								else
									if(jumlahhari==29)
											printf("Jumlah hari pada bulan tersebut adalah, %d \n",jumlahhari);
									else 
											printf("Angka yang anda masukkan salah. \n");
							}
		default:printf("\n \n \n Tekan Enter Sekali Lagi Untuk Keluar dari Program. \n");
	}
}
