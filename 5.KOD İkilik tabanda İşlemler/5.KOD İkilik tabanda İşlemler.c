#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	int b=5;
	int c=2;
	
	printf("\n%d",a=b+c<<2);      // a de�i�kenini b ve c nin toplam�na e�itle ard�ndan binarry(ikilik de�erini) iki sola kayd�r ve yaz.  binary 0000 0111=7, i�lem sonras� sola kay�m 0001 1100 = 20  olur.
	printf("\n%d",a=b+c>>2);      // a de�i�kenini b ve c nin toplam�na e�itle ard�ndan binarry(ikilik de�erini) iki sa�a kayd�r ve yaz.  binary 0000 0111=7, i�lem sonras� sa�a kay�m 0000 0001 = 1 . 11 tan�ms�z alana ge�mi� olur.
    printf("\n%d",a=b&c);         // & operat�r� ve and mant�k kap�s�d�r. ikilik sistemde her basama�� true ve false olarak alg�lar sonucu and kap�s�na g�re yans�t�r.  b = 0101 =5 and c = 0010 =2 yap�l�rsa a = 0000 = 0 
    printf("\n%d",a=b|c);         // & operat�r� ve or mant�k kap�s�d�r. ikilik sistemde her basama�� true ve false olarak alg�lar sonucu and kap�s�na g�re yans�t�r.  b = 0101 =5 or c = 0010 =2 yap�l�rsa a = 0111 = 7
    printf("\n%d",b=b|c&3);       // b = 0101 =5 or c = 0010 =2  and  3 = 0011    and �ncelikidir. 1.ad�m  b = 0101 =5 or 0010 =2   2.ad�m 0111 = 7
    
	getch();
    return 0;
}
