#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,sayi,c=0;
	printf("Bir sayi giriniz.\n");
	scanf("%d",&sayi);
	printf("\n");
	for(a=1;a<=sayi;a++)
	{
		for(b=1;b<=sayi;b++)
		{
			if(sayi%2==0)
			{
				if(b==sayi/2||b==(sayi/2)+1||a==sayi/2||a==(sayi/2)+1)
				printf("%3d ",sayi);
				else
				printf("%3d ",c);
			}else
			{
				if(b==(sayi/2)+1||a==(sayi/2)+1)
				printf("%3d ",sayi);
				else
				printf("%3d ",c);
			}
		}
		printf("\n");
	}
	getch();
	return 0;
}
