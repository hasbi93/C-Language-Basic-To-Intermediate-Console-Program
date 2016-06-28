/*
* Title               : Distance Formula Counter (rumusmenghitungjaraktempuh.c)
* Program Description : To Compute Distance of the Vehicle using Speed and Time.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

float s,v,t;

main()
{
	printf("Distance Formulae Counter Console Program \n");
	printf("Please Insert Average Moving Speed in km/jam(v) \n");
	scanf("%f",&v);
	printf("Please Insert Amount of Time Period (t) \n");
	scanf("%f",&t);
	s=v*t;
	printf("The Distance is: %f %s \n",s," km.");
	
}
