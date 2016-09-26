#include<stdio.h>
#include<string.h>

char ibukota[50];

main()
{
	printf("Masukkan nama ibukota provinsi di pulau jawa yang anda inginkan. \n");
	printf("Hanya gunakan huruf kecil saja. \n");
	scanf("%s",&ibukota);
	if (strcmp(ibukota,"serang")==0)
		printf("Provinsi Banten. \n");
	else
		if(strcmp(ibukota,"jakarta")==0)
			printf("Provinsi DKI Jakarta. \n");
		else
			if(strcmp(ibukota,"bandung")==0)
				printf("Provinsi Jawa Barat. \n");
			else
				if(strcmp(ibukota,"semarang")==0)
					printf("Provinsi Jawa Tengah. \n");
				else
					if(strcmp(ibukota,"yogyakarta")==0)
						printf("Provinsi D.I.Yogyakarta. \n");
					else
						if(strcmp(ibukota,"surabaya")==0)
							printf("Provinsi Jawa Timur. \n");
						else
							printf("Maaf, input anda salah. \n");
}

