/*
* Title               : Simple Student Data Presentation Program (TestDeklarasiFormatdanEkspresiAlgoritma.c)
* Program Description : Simple Exercise of C Lang. Code to Show Student Data  on The Computer Screen.
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include<stdio.h>

typedef struct
{
	int hh;
	int mm;
	int ss;
} jam;

int nrp;
char nama_mhs[99];
float nilai;
jam J;

main()
{
	printf("Student Data Presentation Program: a Simple Example of Data Structure Console Program \n");
	printf("Please, Insert Your Name: \n");
	scanf("%s",&nama_mhs);
	printf("Please, Enter Your Student ID Number: \n");
	scanf("%d",&nrp);
	printf("Please Insert Your Grade  from The Last Exam on Subject Information Technology: \nYour Grade Will be Printed Off on The Screen \n");
	scanf("%f",&nilai);
	J.hh=6;
	J.mm=12;
	J.ss= 45;
	printf("\n");
	printf("Student Data Record \n");
	printf("\n");
	printf("Student Name: %s \n", nama_mhs);
	printf("Student ID Number:%d \n", nrp);
	printf("Student Grade of IT Exam: %f \n", nilai);
	printf("Time of Exam: %d:%d:%d \n", J.hh,J.mm, J.ss);
}
