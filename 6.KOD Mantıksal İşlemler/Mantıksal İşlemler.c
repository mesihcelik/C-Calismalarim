#include <stdio.h>
#include <conio.h>

int main()
{
	int a=5;
	int b=3;
	int c=15;
	
	printf("%d",a==b);                 // == operat�r� e�er de�i�kenler birbirine e�itse 1 de�ilse 0 d�nderir.
	printf("\n%d",a!=b);               // != operat�r� e�er de�i�kenler birbirine e�itse 0 de�ilse 1 d�nderir.
	
	printf("\n%d",a<b);                // < operat�r� e�er a, b den k���kse 1 de�ilse 0 d�nderir.
	printf("\n%d",a>b);                // < operat�r� e�er a, b den b�y�kse 1 de�ilse 0 d�nderir.
	
	printf("\n%d",a<=b);               // <= operat�r� e�er a, b den k���k veya e�itse 1 de�ilse 0 d�nderir.         
	printf("\n%d",a>=b);               // <= operat�r� e�er a, b den b�y�k veya e�itse 1 de�ilse 0 d�nderir. 
	                              
                                       /* iki mant�ksal i�lemin sa�lan�p sa�lanmad���n� kontrol etmek i�in && , ||  operat�rleri (and ve or) kullan�l�r.*/	
 	printf("\nand ve or");
 	printf("\n%d",a>b||a<6);           // a de�i�keni b den b�y�k ve a de�i�keni 6 dan k���k ise 1 de�ilse 0 d�nd�r�r.
 	printf("\n%d",a>6&&a<4);           // a de�i�keni 6 dan b�y�k veya a de�i�keni 4 den k���k ise 1 de�ilse 0 d�nd�r�r.
 	printf("\n%d",c<a||c>b&&c==15);    // e�er c de�i�keni a dan k���k ve c de�i�keni 4 den b�y�k veya c 15 e e�it ise 1 de�ilse 0 d�nd�r�r.
 	
 	getch();
 	return 0; 	
}
