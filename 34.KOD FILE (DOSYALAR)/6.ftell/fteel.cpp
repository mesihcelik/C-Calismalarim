#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *stream;                                           //FILE cinsinden stream adl� bir pointer tan�mla
	stream=fopen("MYFILE.TXT","w");                         //fopen fonksiyonu ile write modunda a� stream pointerine ata
	fprintf(stream,"hatay sini kunefe");                    //fprintf komutuyla stream ponterine yard�m�yla myfile.txt adresine karakterleri bas
	printf("dosyadaki konum: %Id\n",ftell(stream));         //ftell fonksiyonu belirtilen pointere tan�ml� dosyada cruseri(yer belirtecinin) ka��nc� s�rada oldu�unu say�sal olarak d�nd�r�r
	fclose(stream);                                         //fclose fonksiyonu ile dosyay� kapat
	return 0;
}
