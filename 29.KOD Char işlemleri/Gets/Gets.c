#include <stdio.h>
#include <conio.h>

int main()
{
	char karsilamamesaji[]="Hos Geldiniz";            //Hoþ geldin mesajýný karakter ile içinde tutan dize
	char adsoyad[25];                                 //25 Karakter tutabilen input alýnacak dizi
	
	puts("\n\tAdiniz ve Soyadinizi Giriniz :\t");
	
	gets(adsoyad);
	
	printf("%s %s",karsilamamesaji,adsoyad);
}
