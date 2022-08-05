#include <stdio.h>
#include <conio.h>

int fact(int);                         //fact adýnda fonksiyon var. int parametreye sahip. int sonuç veren(döndüren) fonksiyon
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
	
	return sonuc;                    // return komutu fonksiyonun çaðrýldýðý yere dönmesi.Yansýtýlacak deðer
}
