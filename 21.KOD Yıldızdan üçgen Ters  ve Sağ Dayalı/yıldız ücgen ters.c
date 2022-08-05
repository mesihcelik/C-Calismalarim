#include <stdio.h>
#include <conio.h>

int main()
{
	int b,x,y,z;
	printf("Ucgenin X ve Y kenarinin kac yildizdan olusmasini istediginizi belirtiniz..\n");
	scanf("%d",&b);
	printf("\n\n\n");
	for(y=b;y>=1;y--)
	{
		for(x=y;x>=1;x--)
		{
			printf("*");
		}
		printf("\n");
		
		for(z=b;z>=y;z--)
		{
			printf(" ");
		}
	}
	
	getch();
	return 0;
}
