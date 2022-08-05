#include <stdio.h>
#include <conio.h>

int main()
{
	int srg,kln,i;
	printf("Kontrol edilecek sayiyi giriniz.\n");
	
	scanf("%d",&srg);
	for(i=2;i<srg;i++)
	{
		kln=srg%i;                                  //kalan deðeri
		if(0==kln&&srg!=i)                          //kalanýn 0 vei den farklý olmasý þartý
		{
			printf("%d asal sayi degildir.",srg);
			break;                                  //break komutu döngü kýrma komutudur.
		}
	}
	
	if(kln!=0||srg==2)
	printf("%d asal sayidir.",srg);
	else if(srg==1)
	printf("%d asal sayi degildir.",srg);

	getch();
	return 0;
	
}
