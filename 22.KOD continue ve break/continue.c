#include <stdio.h>
#include <conio.h>

int main()
{
	int b,c;
	printf("\ncontinue inceleme"); 
	for(c=1;c<=15;c++)
	{
     	if(c>6&&c<9)
		{
			continue;            // continue komutu �art sa�land��� zaman devreye girerek kendisinden sonraki sat�rlar� okumayacak
		}
		printf("\n%d",c);        
	}
	printf("\nbreak inceleme"); 
	for(b=1;b<=15;b++)
	{
     	if(b==8)
		{
			break;            // break komutu �art sa�land��� zaman d�ng�y� k�rar
		}
		printf("\n%d",b);        
	}
	getch();
	return 0;
}
