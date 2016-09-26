#include<stdio.h>
#include<string.h>
#include<math.h>

long int i,j,m,r,x;

main()
{
	i=1;
	j=0;
	printf("Masukkan Angka yang Ingin Anda Jumlahkan dan Anda Cari Rerata dan Nilai Mod-nya: \n");
	scanf("%ld",&x);
	
	if (x!=0)
		{	
			while (x!=0)
				{
					i=i+1;
					j=j+x;
					printf("jumlah sementara=%ld, x(angka yang dimasukkan)=%ld \n",j,x);
					printf("Masukkan Angka 0 Jika Anda Ingin Mengakhiri Operasi \n");
					printf("Masukkan Angka yang Ingin Anda Jumlahkan: \n");
					scanf("%ld",&x);
					if(x!=0)
						{
							printf("Deret Bilangan Sementara (i) = %ld \n",i);	
						}
					else
						{
							i=i-1;
							r=j/i;
							m=j%i;
							printf("Deret Bilangan Akhir (i) = %ld \n",i);
							printf("Rerata (%ld Div  %ld)= %ld \n",j,i,r);
							printf("Mod  (%ld Mod %ld)= %ld \n",j,i,m);		
						}
				}			
		}
	else
		{
			printf("Tidak Ada Data yang Dimasukkan. \n");
		}
}
