#include <stdio.h>
#include <conio.h>

int main()
{
	int girilen,symik,i;
	int eb=0;
	
	printf("Karsilastiracak sayi miktarini giriniz.\n");
	scanf("%d",&symik);
	
	for(i=0;i<symik;i++)
	{
		printf("Kasilastirilacak %d.Sayiyi giriniz.\n",i+1);
		scanf("%d",&girilen);
		if(girilen>eb)
		{
			eb=girilen;
		}
	}
	
	printf("\nGirilen en buyuk sayi:%d",eb); 
	getch();
	return 0;
	
}
