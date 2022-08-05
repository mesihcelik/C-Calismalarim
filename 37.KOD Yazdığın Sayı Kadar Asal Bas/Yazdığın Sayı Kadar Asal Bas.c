#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,c,d;
	printf("Lutfen en kucuk asal sayidan baslayarak, kac asal sayi basmak istediginizi belirtiniz.\n");
    scanf("%d",&a);
    if(a>1)
	printf("\n\n2 ");
	for(b=3;b>2;b++)
	{

		for(c=2;c<=(b/2)+1;c++)
		{
			if(b%c==0)
			break;
			if(c==(b/2)+1)
			{
			   d=d+1;
			   printf("%d ",b);
			}
			
		}
		if(a-1==d)
		break;
	}
	getch();
	return 0;
}
