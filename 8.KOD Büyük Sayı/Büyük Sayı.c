#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	int b;
	
	printf("Lutfen artarda iki sayi giriniz. Ve hangisinin buyuk oldugunu ogrenin.\n");
	scanf("%d%d",&a,&b);	
	
	if(a<b)
	{
		printf("Buyuk olan sayi : %d",b);
	}else
	{
		printf("Buyuk olan sayi : %d",a);
	}
}
