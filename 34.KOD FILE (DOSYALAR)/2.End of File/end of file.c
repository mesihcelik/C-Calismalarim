#include <stdio.h>
#include <conio.h>
void main()
{
	char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp))                 // !foeo() komutu dosyan�n sonuna ula��ld���n� s�yler. Her dosyan�n sonunda bir en of file pointeri var bu sembole ula��ld���nda dosyan�n sonuna ula��ld��� anla��l�r
	{                                //while d�ng�s� end of file sembol�ne gelene kadar d�ns�n.
		ch=getc(fp);                 // getc(fp) fp pointeri ile dosyadan bi karakter oku bu karakteri char cinsinden ch nesnesinin i�eri�ine bas
		printf("\n%c",ch);           // ch yi ekrana bas
	}
	
	getch();
	return 0;
}
