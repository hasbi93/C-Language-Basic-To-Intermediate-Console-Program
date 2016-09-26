/*PROGRAM PenjumlahanDeret*/
/*Menjumlahkan Deret1+2+3+...+N, N Bilangan Bulat Positif,N Dibaca Terlebih Dahulu*/

#include <stdio.h>
main()
{
/*Deklarasi*/
int N;
int i;
int jumlah;
int Exit;

/*ALGORITMA*/
printf("Berapa nilai N?"); scanf("%d", &N); /*BANYAKNYA SUKU DERET*/
jumlah=0; /*inisialisasi jumlah deret dengan 0*/
for(i=1;i<=N; i++)
{jumlah=jumlah+i;
}
printf("Jumlah deret= %d %s \n", jumlah,"\n");
printf("Press 0 and Then Enter to Exit. \n");
scanf("%d",&Exit);
}
