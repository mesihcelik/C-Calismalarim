#include <stdio.h>
#include <conio.h>
                         // Bu kodu incelerken klos�rdeki tablonun resimiyle birlikte incele
int main()
{
	int *p;                 // p isminde bir pointer olu�tur
	int a=10;                // a mant�ksal ismi tan�mla i�inede (i�eri�ine) 10 de�erini koy
	p=&a;                   // &(ampersand i�areti) adres de�erini g�steren i�aret, int cinsinden p ismindeki nesnenin i�eri�ine a n�n adresini yaz 
	printf("%d\n",*p);      // p'nin i�eri�ini ekrana basar
	printf("%d\n",p);       // p'nin de�erini yani, p'nin g�sterdi�i yerin adresini basar
	printf("%d\n",a);       //a'n�n i�erik de�erini basar
	printf("%d\n",&p);      //p isimli nesnenin Adres De�erini ekrana basar
	
	int *q;
    q=&p;
	
	scanf("%d",&a);         //a isimli nesnenin, kay�tl� oldu�u adres de�erinin i�eri�ine klavyedeki de�eri kaydet
	
	
	getch();
	return 0;
}
