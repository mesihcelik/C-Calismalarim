#include <stdio.h>
#include <conio.h>

int fact(int);                         //fact ad�nda fonksiyon var. int parametreye sahip. int sonu� veren(d�nd�ren) fonksiyon
int main()
{
	printf("Bir sayi giriniz:");
	int x;
	scanf("%d",&x);
	printf("5!=%d",fact(x));
	getch();
}
int fact(int x)
{
	int sonuc=1;
	int i;
	for(i=1;i<=x;i++)
	{
		sonuc*=i;
	}
	
	return sonuc;                    // return komutu fonksiyonun �a�r�ld��� yere d�nmesi.Yans�t�lacak de�er
}
