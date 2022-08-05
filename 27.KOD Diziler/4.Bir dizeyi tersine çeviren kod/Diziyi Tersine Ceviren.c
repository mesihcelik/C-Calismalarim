#include <stdio.h>
#include <conio.h>

int main()
{
	int a[]={1,4,6,10,15};
	int i;
	
	printf("a = {");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
		if(i<4)
		printf(",");
		
	}
	printf("}");
	//tersine çeviren fonksiyon
	
	int hafiza;
		
		
	for(i=0;i<2;i++)
	{
		hafiza=a[i];                //Dögü sýrasýndaki deðeri int cinsinden hafiza nesnesinde saklýyoruz.Bu sayede sondan alýp baþa koyabiliriz.Ve ilk deðerin üstüne biþey yazýlmýþ olmaz.
        a[i]=a[4-i];
		a[4-i]=hafiza;                //Kaydýrýlan deðerin yerine hafýzadakini yazýyoruz	
	}
	
	printf("\n\na = {");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
		if(i<4)
		printf(",");
		
	}
	printf("}");	

	
	
}
