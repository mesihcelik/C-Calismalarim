#include <stdio.h>
#include <conio.h>

int main()
{
	int a,i,j,kalan;
	printf("Lutfen bir sayi giriniz.\n");
	scanf("%d",&a);
	
	for(i=a-1;i>=0;i--)
	{
		if(a==3)
		{
			printf("\n%d sayisindan kucuk, en buyuk asal sayi %d sayisidir.",a,i);
		    break;
		}else if(a<=2)
		{
			printf("\n2 kucuk asalsayi bulunmamaktadir");
			break;
		}
		for(j=i-1;j>=2;j--)
		{
			kalan=i%j;
			if(i%j==0)
			{
				break;
			}
		}
		if(kalan!=0)
		{
				printf("\n%d sayisindan kucuk, en buyuk asal sayi %d sayisidir.",a,i);
				break;
		}
	}
	getch();
	return 0;
}
