#include <stdio.h>
#include <conio.h>

int main()
{
	char karsilamamesaji[]="Hos Geldiniz";            //Ho� geldin mesaj�n� karakter ile i�inde tutan dize
	char adsoyad[25];                                 //25 Karakter tutabilen input al�nacak dizi
	
	puts("\n\tAdiniz ve Soyadinizi Giriniz :\t");
	
	gets(adsoyad);
	
	printf("%s %s",karsilamamesaji,adsoyad);
}
