#include<stdio.h>

char c;

main()
{
	printf("Masukkan huruf yang anda inginkan \n");
	scanf("%c",&c);
	if (c=='a'||c=='A')
		printf("Ini adalah huruf vokal \n");
	else
		if (c=='i'||c=='I')
			printf("Ini adalah huruf vokal \n");
		else
			if(c=='u'||c=='U')
				printf("Ini adalah huruf vokal \n");
			else
				if(c=='e'||c=='E')
					printf("Ini adalah huruf vokal \n");
				else
					if(c=='o'||c=='O')
						printf("Ini adalah huruf vokal \n");
					else
						printf("Ini adalah huruf mati \n");
}
