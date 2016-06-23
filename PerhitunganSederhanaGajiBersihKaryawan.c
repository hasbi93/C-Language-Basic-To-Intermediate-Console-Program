/*
* Title               : Simple Employee Salary Calculator(PerhitunganSederhanaGajiBersihKaryawan.c)
* Program Description : Calculate Employees Salary Using Simple C-Lang Code
* Author              : Muhammad Hasbi, S.T.
* Interface           : Console
* IDE                 : Dev-C++ 5.11
* Operating System    : Windows 8 Pro 
*/

#include <stdio.h>

main()

{
	const float persentunjangan=0.2;
	const float persenpajak=0.15;
	
	typedef char string[255];
	string namakaryawan;
	
	float gajipokok;
	float tunjangan;
	float pajak;
	float gajibersih;

	printf("Simple Employees Salary Calculator Console Program \n");
	printf("Masukkan Nama Karyawan: \n");
	scanf("%s", &namakaryawan);
	printf("Masukkan Besaran Gaji Pokok: \n ");
	scanf("%f", &gajipokok);
	
	tunjangan=persentunjangan*gajipokok;
	printf("Besar Nilai Tunjangan adalah: %f \n", tunjangan);
	
	pajak=persenpajak*(gajipokok+tunjangan);
	printf("Besaran Nilai Pajak adalah: %f \n", pajak);
	
	gajibersih=gajipokok+tunjangan-pajak;
	printf("Besaran Gaji Bersih adalah: %f \n", gajibersih);
	
	printf("Saudara %s \n", namakaryawan);
	printf("Memiliki gaji bersih sebesar %f \n", gajibersih);
	
}
