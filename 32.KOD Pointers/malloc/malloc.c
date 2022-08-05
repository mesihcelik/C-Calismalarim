#include <stdio.h>
#include <conio.h>
int f(int *);                        


int main()
{
	int *p;                 // p isminde bir pointer oluþtur
	int a=10;                // a mantýksal ismi tanýmla içinede (içeriðine) 10 deðerini koy
	p=&a;                   // &(ampersand iþareti) adres deðerini gösteren iþaret, int cinsinden p ismindeki nesnenin içeriðine a nýn adresini yaz 
	printf("%d\n",*p);      // p'nin içeriðini ekrana basar, (p pointeri a'nýn içeriðini gösterir)
    *p=20;                  // *p pointerine 20 deðerini ata komutuyla a'nýn içeriðinide 20 ye çeker.
    printf("%d\n",a);      // a'nin içeriðini ekrana basar. Pointerler 20 deðeri atandýðý için ekrana basýlan deðer 20 olur.
    
    
    // Bir pointeri dizi gibi kullanmak için malloc komutunu kullanmak gereklidir. malloc (memory all location)
    int*q=(int *)malloc(sizeof(int)*a);    //bir int cinsinden deðerin kapladýðý bellek alaný kadar deðerden, a tane hafýzada yer ayýr.(q artýk a elemanlý dizi oldu)
    q[3]=70;                               //q[3] ün içeriðine 70 i ata
    printf("\n%d",q[3]);                   //q[3]'ü ekrana bas
    
    printf("\n%d",*(q+3));                 //q pointerinin baþlangý deðerinden 3 sonraki bellekteki deðeri basar (q[3]'ü). Yukardaki ile bu satýr ayný içerik deðerini gösterir
    
    
    f(&a);
    printf("\n\n%d",a);
	
	getch();
	return 0;
}
int f(int *a)
{
	*a=80;
}

