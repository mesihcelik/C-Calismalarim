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
	
	while(paymin<=paymax)                      //while komutu i�erisindeki ko�ul sa�land���nda devreye girer. D�ng� ko�ul do�ru oldu�u m�ddet�e d�nmeye devam eder.
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
