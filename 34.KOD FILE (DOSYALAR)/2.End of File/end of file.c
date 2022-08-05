#include <stdio.h>
#include <conio.h>
void main()
{
	char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp))                 // !foeo() komutu dosyanýn sonuna ulaþýldýðýný söyler. Her dosyanýn sonunda bir en of file pointeri var bu sembole ulaþýldýðýnda dosyanýn sonuna ulaþýldýðý anlaþýlýr
	{                                //while döngüsü end of file sembolüne gelene kadar dönsün.
		ch=getc(fp);                 // getc(fp) fp pointeri ile dosyadan bi karakter oku bu karakteri char cinsinden ch nesnesinin içeriðine bas
		printf("\n%c",ch);           // ch yi ekrana bas
	}
	
	getch();
	return 0;
}
