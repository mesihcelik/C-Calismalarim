#include <stdio.h>
#include <conio.h>

int main()
{
	FILE *stream;                                           //FILE cinsinden stream adlý bir pointer tanýmla
	stream=fopen("MYFILE.TXT","w");                         //fopen fonksiyonu ile write modunda aç stream pointerine ata
	fprintf(stream,"hatay sini kunefe");                    //fprintf komutuyla stream ponterine yardýmýyla myfile.txt adresine karakterleri bas
	printf("dosyadaki konum: %Id\n",ftell(stream));         //ftell fonksiyonu belirtilen pointere tanýmlý dosyada cruseri(yer belirtecinin) kaçýncý sýrada olduðunu sayýsal olarak döndürür
	fclose(stream);                                         //fclose fonksiyonu ile dosyayý kapat
	return 0;
}
