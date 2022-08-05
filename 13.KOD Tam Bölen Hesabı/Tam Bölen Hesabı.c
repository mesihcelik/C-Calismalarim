#include <stdio.h>
#include <conio.h>

int main()
{
	int pyda,paymin,paymax;
	
	printf("Lutfen kontrol edilecek payda degerini giriniz.\n");
	scanf("%d",&pyda);
	
	printf("Lutfen sirasiyla min ve max deger araligini giriniz\n");
	scanf("%d%d",&paymin,&paymax);
	
	printf("Tam Bolunen Sayilar :\n");
	
	while(paymin<=paymax)                      //while komutu içerisindeki koþul saðlandýðýnda devreye girer. Döngü koþul doðru olduðu müddetçe dönmeye devam eder.
	{
		if(paymin%pyda==0)
		{
			printf("%d, ",paymin);
		}
		paymin++;		
	}
	
	getch();
	return 0;
}
