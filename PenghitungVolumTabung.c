/*
* Title               : Cylinder Volume Computer (PenghitungVolumTabung.c)
* Program Description : To Compute the Volume of Cylinder using C Language Code
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

float v,r;
const float phi=3.14;

main()
{
	printf("Cylinder Volume Computer Console Program \n");
	printf("Please Insert Cylinders Radius (cm) : \n");
	scanf("%f",&r);
	v=4/3*(phi*r*r);
	
	printf("Total Volume is:  %f %s \n",v," cm3.");
}
