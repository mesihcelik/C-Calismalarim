#include <stdio.h>
#include <conio.h>

int main()
{
	int i=1;                        // do...while d�ng�s�, while ve for gibi d�ng� ba�lamadan �nce ko�ulu kontrol etmek yerine �nce ko�ulu ger�ekle�tirir ard�ndan ko�ulu kotrol eder. 
	do{
		printf("%d",i);
		i++;
	}while(i<=10);
	
	getch();
	return 0;
}
