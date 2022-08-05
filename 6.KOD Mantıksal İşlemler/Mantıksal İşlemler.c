#include <stdio.h>
#include <conio.h>

int main()
{
	int a=5;
	int b=3;
	int c=15;
	
	printf("%d",a==b);                 // == operatörü eðer deðiþkenler birbirine eþitse 1 deðilse 0 dönderir.
	printf("\n%d",a!=b);               // != operatörü eðer deðiþkenler birbirine eþitse 0 deðilse 1 dönderir.
	
	printf("\n%d",a<b);                // < operatörü eðer a, b den küçükse 1 deðilse 0 dönderir.
	printf("\n%d",a>b);                // < operatörü eðer a, b den büyükse 1 deðilse 0 dönderir.
	
	printf("\n%d",a<=b);               // <= operatörü eðer a, b den küçük veya eþitse 1 deðilse 0 dönderir.         
	printf("\n%d",a>=b);               // <= operatörü eðer a, b den büyük veya eþitse 1 deðilse 0 dönderir. 
	                              
                                       /* iki mantýksal iþlemin saðlanýp saðlanmadýðýný kontrol etmek için && , ||  operatörleri (and ve or) kullanýlýr.*/	
 	printf("\nand ve or");
 	printf("\n%d",a>b||a<6);           // a deðiþkeni b den büyük ve a deðiþkeni 6 dan küçük ise 1 deðilse 0 döndürür.
 	printf("\n%d",a>6&&a<4);           // a deðiþkeni 6 dan büyük veya a deðiþkeni 4 den küçük ise 1 deðilse 0 döndürür.
 	printf("\n%d",c<a||c>b&&c==15);    // eðer c deðiþkeni a dan küçük ve c deðiþkeni 4 den büyük veya c 15 e eþit ise 1 deðilse 0 döndürür.
 	
 	getch();
 	return 0; 	
}
