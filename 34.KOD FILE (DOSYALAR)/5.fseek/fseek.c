#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *f;                                //FILE cinsi bir f isimli pointer tanýmla
	f=fopen("myfile.txt","w");              //fopen fonksiyonu aracýyla mayfile.txt i  write modunda aç ve f pointerine eþitle
	fputs("Kutahya Tel Kadayif",f);         //fputs fonksiyonu ile f pointerine  belirtilen yazý basýlýr
	fseek(f,5,SEEK_SET);                    //fseek fonsiyonu ile cruser(konum iþaretçisi) ni SEEK_SET(Dosyanýn baþýndan) 5inci karakterin sonuna getir
	fputs(" sadi",f);                       //cruserin olduðu yerden baþlayýp f pointeri ile deðeri yaz
	fclose(f);                               //dosyayý yaz
	
	getch();
	return 0;
}
