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
	//tersine �eviren fonksiyon
	
	int hafiza;
		
		
	for(i=0;i<2;i++)
	{
		hafiza=a[i];                //D�g� s�ras�ndaki de�eri int cinsinden hafiza nesnesinde sakl�yoruz.Bu sayede sondan al�p ba�a koyabiliriz.Ve ilk de�erin �st�ne bi�ey yaz�lm�� olmaz.
        a[i]=a[4-i];
		a[4-i]=hafiza;                //Kayd�r�lan de�erin yerine haf�zadakini yaz�yoruz	
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
