#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *f;                                //FILE cinsi bir f isimli pointer tan�mla
	f=fopen("myfile.txt","w");              //fopen fonksiyonu arac�yla mayfile.txt i  write modunda a� ve f pointerine e�itle
	fputs("Kutahya Tel Kadayif",f);         //fputs fonksiyonu ile f pointerine  belirtilen yaz� bas�l�r
	fseek(f,5,SEEK_SET);                    //fseek fonsiyonu ile cruser(konum i�aret�isi) ni SEEK_SET(Dosyan�n ba��ndan) 5inci karakterin sonuna getir
	fputs(" sadi",f);                       //cruserin oldu�u yerden ba�lay�p f pointeri ile de�eri yaz
	fclose(f);                               //dosyay� yaz
	
	getch();
	return 0;
}
