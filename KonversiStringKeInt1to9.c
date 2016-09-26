#include<stdio.h>
#include<math.h>
#include<string.h>

char angka[100];
long int angka2;

main()
{
	printf("Masukkan angka satu-sembilan dalam bentuk huruf. \n");
	scanf("%s",&angka);
	if (strcmp(angka,"satu")==0)
		{
			angka2=1;
			printf("%ld",angka2);
		}
	else
		if (strcmp(angka,"dua")==0)
			{
				angka2=2;
				printf("%ld",angka2);
			}
		else
			if(strcmp(angka,"tiga")==0)
				{
					angka2=3;
					printf("%ld",angka2);
				}
			else
				if(strcmp(angka,"empat")==0)
					{
						angka2=4;
						printf("%ld",angka2);
					}
				else
					if(strcmp(angka,"lima")==0)
						{
							angka2=5;
							printf("%ld",angka2);
						}
					else
						if(strcmp(angka,"enam")==0)
							{
								angka2=6;
								printf("%ld",angka2);
							}
						else
							if(strcmp(angka,"tujuh")==0)
								{
									angka2=7;
									printf("%ld",angka2);
								}
							else
								if(strcmp(angka,"delapan")==0)
									{
										angka2=8;
										printf("%ld",angka2);
									}
								else
									if(strcmp(angka,"sembilan")==0)
										{
											angka2=9;
											printf("%ld",angka2);
										}
									else
										{
											printf("Maaf,Angka yang Anda Masukkan Salah. \n");
										}
}

