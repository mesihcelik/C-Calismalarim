#include <stdio.h>
#include <conio.h>

int main()
{
	float grln=0;
	float dng=0;
	float tplm;
	
	printf("Ortalamasini almak istediginiz sayilari girdikten sonra. -1 degeri ile islemi sonuclandirin\n");
	
	while(grln!=-1)
	{
		scanf("%f",&grln);
		if(grln!=-1)
		{
		tplm=grln+tplm;
		++dng;	
		}
		
	}
	
	printf("\nGirilen sayilarin ortalamasi : %10.2f",tplm/dng);
	
	getch();
	return 0;
}
