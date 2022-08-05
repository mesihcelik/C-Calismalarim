#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *f;
	char buffer[11];                     //10 char tipi karakteri saklayabilecek buffer adýnda dizi
	if(f=fopen("fred.txt","r"))          //eðer read modunda dosya açýlabilirse aç f pointerine eþitle ve alttaki komutlarý döndür 
	{
		fread(buffer,1,10,f);            //eþitlenen f pointerinden fread fonksiyonu ile sýrasýyla bir 1 kere okuma yap ve 10 karakteri oku ardýndan buffer dizisine yaz. 
		buffer[10]=0;                    //kaydedilen harf verilerinin sonuncu karakterine 0 ekle
		fclose(f);                       //Dosyayý kapat
		printf("first 10 characters of the file:\n%s\n",buffer);      // buffer dizin ini ekrana bas
	}else
	{
		printf("Dosya acilamadi bir hata olustu");
	}
	getch();
	return 0;
}
