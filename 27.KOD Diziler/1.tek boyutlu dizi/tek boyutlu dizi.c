#include <stdio.h>
#include <conio.h>

int main()
{
	int a[10];                    //a[] int tipinde 10 Elemanlýk tek boyuzlu bir dizi.Hafýzada yer ayrýlmasý içini dizinin boyutu girimelidir veya b[] gibi eleman sayýsý yazýlmayýp direk eleman deðerleri yazýlarak da kullanýlabilir
    int b[]={2,5,3,4,8,13,-7};
    printf("%d\n\n\n\n",b[5]);    
	int i;                        // dizilerde her kutu hafýzada bir yer kaplar ve ayrý ayrý çaðýrýlabilir
	
	for(i=0;i<10;i++)          
	{                             //diziler 0 deðerinden baþlar
		a[i]=i;                   //a ' ininci elemanýna i deðerini ata
		printf("-%d-",a[i]);      //a ' nýn i 'inci deðerini ekrana bas 
	}
	                               //döngü bittiðinde hafýzadaki görüntü 1 2 3 4 5 6 7 8 9  þeklinde olur. yani a[0]=1 , a[1]=2, a[2]=3, a[3]=4, a[4]=5, a[5]=6, a[6]=7, a[7]=8, a[8]=9 þeklinde deðer alýr.
	getch();
	return 0;
}
