/*
* Title               : M Value Counter (menghitungnilaim.c)
* Program Description : To Compute the Value of M using m formula (((a-b)*(3*a*c))*(1-(b/(c*d))).
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

float a,b,c,d,m;

main()
{	
	printf("M Formula Counter Console Program \n");
	printf("Please Insert Value of A,B,C,and D using Positive Number Only (cm) \n");
	printf("Please Insert A Value: \n");
	scanf("%f",&a);
	printf("Please Insert B Value: \n");
	scanf("%f",&b);
	printf("Please Insert C Value: \n");
	scanf("%f",&c);
	printf("Please Insert D Value: \n");
	scanf("%f",&d);
	m=((a-b)*(3*a*c))*(1-(b/(c*d)));
	
	printf("The Value of M is : %f %s \n",m,"Cm");
	
}
