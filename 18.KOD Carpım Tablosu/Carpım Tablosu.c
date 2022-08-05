#include <stdio.h>
#include <conio.h>

int main()
{	
    int x,y,xb,yb;
    
    printf("Lutfen carpim tablosunun satir sayisini giriniz...\n");
	scanf("%d",&yb);    
    printf("Lutfen carpim tablosunun sutun sayisini giriniz...\n");
	scanf("%d",&xb);
    printf("\n\n\n");
	
	for(y=1;y<=yb;y++)
	{
		for(x=1;x<=xb;x++)
		{
			printf("%5d ",x*y);
		}
		printf("\n");
	}
	
	getch();
	return 0;
	
}
