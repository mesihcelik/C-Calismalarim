#include <stdio.h>
#include <conio.h>
int f(int *);                        


int main()
{
	int *p;                 // p isminde bir pointer olu�tur
	int a=10;                // a mant�ksal ismi tan�mla i�inede (i�eri�ine) 10 de�erini koy
	p=&a;                   // &(ampersand i�areti) adres de�erini g�steren i�aret, int cinsinden p ismindeki nesnenin i�eri�ine a n�n adresini yaz 
	printf("%d\n",*p);      // p'nin i�eri�ini ekrana basar, (p pointeri a'n�n i�eri�ini g�sterir)
    *p=20;                  // *p pointerine 20 de�erini ata komutuyla a'n�n i�eri�inide 20 ye �eker.
    printf("%d\n",a);      // a'nin i�eri�ini ekrana basar. Pointerler 20 de�eri atand��� i�in ekrana bas�lan de�er 20 olur.
    
    
    // Bir pointeri dizi gibi kullanmak i�in malloc komutunu kullanmak gereklidir. malloc (memory all location)
    int*q=(int *)malloc(sizeof(int)*a);    //bir int cinsinden de�erin kaplad��� bellek alan� kadar de�erden, a tane haf�zada yer ay�r.(q art�k a elemanl� dizi oldu)
    q[3]=70;                               //q[3] �n i�eri�ine 70 i ata
    printf("\n%d",q[3]);                   //q[3]'� ekrana bas
    
    printf("\n%d",*(q+3));                 //q pointerinin ba�lang� de�erinden 3 sonraki bellekteki de�eri basar (q[3]'�). Yukardaki ile bu sat�r ayn� i�erik de�erini g�sterir
    
    
    f(&a);
    printf("\n\n%d",a);
	
	getch();
	return 0;
}
int f(int *a)
{
	*a=80;
}

