#include <stdio.h>
#include <conio.h>

int main()
{
	int a[10][10];                     //10 a 10 boyutlu bir diz oluþtur.
	int i,j,satir,sutun;                           
	
	for(i=0;i<10;i++)          
	{
	    for(j=0;j<10;j++)                    
		{
			a[i][j]=j+(i*10);
			printf("-%2.2d-",a[i][j]);       
		}                           
		printf("\n");      
	}
	

printf("\nLutfen matristeki cagirilmak istenilen degerin artarda Satir ve Sutun degerlerini giriniz!!!\n");
scanf("%d%d",&satir,&sutun);
printf("Ekrana basilan matris tablosunda %d.Satir, %d.Sutun'a denk gelen deger : %d \n\n",satir,sutun,a[satir-1][sutun-1]);
printf("Algoritmada cagirilan ikili dize g[%d][%d] = %d",satir-1,sutun-1,a[satir-1][sutun-1]);
 

	getch();
	return 0;
}
