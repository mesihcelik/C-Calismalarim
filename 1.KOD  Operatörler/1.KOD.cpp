#include <stdio.h>
#include <conio.h>

int main()
{
	int a = 10;
	int b =3, c = 4;
	int x;

	printf(" a : %d , b : %d , c : %d", a,b,c);     /*  %d  anlam� ben "" aral���ndan sonra bir de�i�ken belirleyece�im o de�erleri de�i�kenler s�ras�na g�re al ve o de�i�keni %d yerine koy i�in yaz�l�r*/
	printf("\n a : %d , b : %d , c : %d", a,b,c);   /*  \n alt sat�ra yazd�r */
	
	a = 20; b = 30; c = 40;                         /*  = sa�daki say�y� de�i�kene tan�mla */   
	printf("\n a : %d , b : %d , c : %d", a,b,c); 
	
	printf("\n Sayi Tanimlayiniz");
	scanf("%d", &x);                                /*  scanf komutu ekrandaki say� de�i�kenini oku , &x  x'e tan�mla */  
	printf("\n Girilen sayi : %d", x);
	
	float pi = 3.14;                                /* float de�i�keni ondal�k say� i�in kullan�l�r */ 
	printf("\n %f", pi);                            /* %f float cinsi de�i�keni ekrana bas */  
	printf("\n %8.4f", pi);                         /* buradaki 8 ekrana bas�lan say�y� nokta dahil 8 karakterle s�n�rla 4 karakter virg�lden sonras� yz�ls�n  */ 
	
	getch();
	return 0;                      // C de a��klama i�in kullan�l�r
}
