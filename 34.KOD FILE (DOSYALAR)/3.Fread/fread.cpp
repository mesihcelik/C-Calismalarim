#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *f;
	char buffer[11];                     //10 char tipi karakteri saklayabilecek buffer ad�nda dizi
	if(f=fopen("fred.txt","r"))          //e�er read modunda dosya a��labilirse a� f pointerine e�itle ve alttaki komutlar� d�nd�r 
	{
		fread(buffer,1,10,f);            //e�itlenen f pointerinden fread fonksiyonu ile s�ras�yla bir 1 kere okuma yap ve 10 karakteri oku ard�ndan buffer dizisine yaz. 
		buffer[10]=0;                    //kaydedilen harf verilerinin sonuncu karakterine 0 ekle
		fclose(f);                       //Dosyay� kapat
		printf("first 10 characters of the file:\n%s\n",buffer);      // buffer dizin ini ekrana bas
	}else
	{
		printf("Dosya acilamadi bir hata olustu");
	}
	getch();
	return 0;
}
