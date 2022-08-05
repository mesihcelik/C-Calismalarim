#include <stdio.h>
#include <conio.h>

int main()
{
	int i=1;                        // do...while döngüsü, while ve for gibi döngü baþlamadan önce koþulu kontrol etmek yerine önce koþulu gerçekleþtirir ardýndan koþulu kotrol eder. 
	do{
		printf("%d",i);
		i++;
	}while(i<=10);
	
	getch();
	return 0;
}
