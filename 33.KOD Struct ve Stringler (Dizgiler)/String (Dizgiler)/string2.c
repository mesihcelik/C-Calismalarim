#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	char ilks[20]="deneme mesaji";
	char ikincis[20]="ikinci mesaj";
	
	printf("\n\ndiziler scanf oncesi komut cikisi : %s , %s",ilks,ikincis);
	
	int i=0;
	char c=ilks[0];                //char dizinleri bir baþka kopyalama yöntemi
	while(c!='\0')                //dizinler bütün karakterlerin sonunda kelimein bittiðini göstermek için son alanda \0 dönderir yani sana geldiðinde while döngüsü sonlanýr
	{
		ilks[i]=ikincis[i];
		i++;
		c=ikincis[i];
	}
	 
	printf("\n\ndiziler scanf oncesi kopyalama komut cikisi : %s , %s\n",ilks,ikincis);
	
	
	printf("\n\nBirinci ve ikinci kelime girislerini yapiniz\n");
	
	scanf("%s  %s",ilks,ikincis);
	printf("\nBirinci komut cikisi : %s , %s",ilks,ikincis);
	ilks[3]='x';                                               //dizinin 3 deðerinde tutulan deðerin üstüne x karakterini yazar
	printf("\n\nIkinci komut cikisi : %s , %s",ilks,ikincis);
	
	char *akilks=ilks;                                         //pointere aktarýlan kýsým
	char *akikincis=ikincis;                                   //birbirine aktarým "shadow copy" pointerlerde çalýþýyor
	printf("\n\nPointer Birinci komut cikisi : %s , %s",akilks,akikincis);
	akilks=akikincis;
	ilks[2]='t';   
	printf("\n\nPointer ikinci komut cikisi : %s , %s",akilks,akikincis);
	
	
	
	
	
	
	getch();
	return 0;
}
