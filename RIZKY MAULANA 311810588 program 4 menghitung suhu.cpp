#include <stdio.h>
#include <conio.h>

int main()
{
	float c, r, f,k;
	printf("		PROGRAM KONVERSI SUHU DARI CELCIUS KE :		\n");
	printf("			FAHRENHEIT | REAMUR		   	\n");
	printf("                  BY DONI IRAWAN 311810530 STT 18 B2");
	printf("				    	 		INSTITUT PELITA BANGSA\n\n");
	printf("masukan besar suhu dalam celcius : ");
	scanf("%f", &c);
	f=(c*1.8)+32;
	printf("suhu dalam fahrenheit : %.2f Fahrenheit\n", f);
	r=(c*0.8);
	printf("suhu dalam Reamur: %2f Reamur\n", r);
	getch();
}
