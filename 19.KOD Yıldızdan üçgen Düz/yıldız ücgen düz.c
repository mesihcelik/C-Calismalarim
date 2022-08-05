#include <stdio.h>
#include <conio.h>

int main()
{
	int b,y,x;
	printf("Ucgenin X ve Y kenarinin kac yildizdan olusmasini istediginizi belirtiniz..\n");
	scanf("%d",&b);
	printf("\n\n\n");
	for(y=1;y<=b;y++)
	{
		for(x=1;x<=y;x++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
