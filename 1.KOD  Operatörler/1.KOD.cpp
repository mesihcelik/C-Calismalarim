#include <stdio.h>
#include <conio.h>

int main()
{
	int a = 10;
	int b =3, c = 4;
	int x;

	printf(" a : %d , b : %d , c : %d", a,b,c);     /*  %d  anlamý ben "" aralýðýndan sonra bir deðiþken belirleyeceðim o deðerleri deðiþkenler sýrasýna göre al ve o deðiþkeni %d yerine koy için yazýlýr*/
	printf("\n a : %d , b : %d , c : %d", a,b,c);   /*  \n alt satýra yazdýr */
	
	a = 20; b = 30; c = 40;                         /*  = saðdaki sayýyý deðiþkene tanýmla */   
	printf("\n a : %d , b : %d , c : %d", a,b,c); 
	
	printf("\n Sayi Tanimlayiniz");
	scanf("%d", &x);                                /*  scanf komutu ekrandaki sayý deðiþkenini oku , &x  x'e tanýmla */  
	printf("\n Girilen sayi : %d", x);
	
	float pi = 3.14;                                /* float deðiþkeni ondalýk sayý için kullanýlýr */ 
	printf("\n %f", pi);                            /* %f float cinsi deðiþkeni ekrana bas */  
	printf("\n %8.4f", pi);                         /* buradaki 8 ekrana basýlan sayýyý nokta dahil 8 karakterle sýnýrla 4 karakter virgülden sonrasý yzýlsýn  */ 
	
	getch();
	return 0;                      // C de açýklama için kullanýlýr
}
