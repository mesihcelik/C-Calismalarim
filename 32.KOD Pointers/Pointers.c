#include <stdio.h>
#include <conio.h>
                         // Bu kodu incelerken klosördeki tablonun resimiyle birlikte incele
int main()
{
	int *p;                 // p isminde bir pointer oluþtur
	int a=10;                // a mantýksal ismi tanýmla içinede (içeriðine) 10 deðerini koy
	p=&a;                   // &(ampersand iþareti) adres deðerini gösteren iþaret, int cinsinden p ismindeki nesnenin içeriðine a nýn adresini yaz 
	printf("%d\n",*p);      // p'nin içeriðini ekrana basar
	printf("%d\n",p);       // p'nin deðerini yani, p'nin gösterdiði yerin adresini basar
	printf("%d\n",a);       //a'nýn içerik deðerini basar
	printf("%d\n",&p);      //p isimli nesnenin Adres Deðerini ekrana basar
	
	int *q;
    q=&p;
	
	scanf("%d",&a);         //a isimli nesnenin, kayýtlý olduðu adres deðerinin içeriðine klavyedeki deðeri kaydet
	
	
	getch();
	return 0;
}
