#include <stdio.h>
#include <conio.h>

float diziort(float istdizi[],float dizi_el_sy);  //diziort fonksiyonunun tanımlanması. Bu sayede fonksiyon main içinde çalışır hale gelir.
int main()
{
	float ort;
	float notlist[]={1,2,3,4,5,6,7,8,9};
	ort=diziort(notlist,9);
	printf("ortalama :%.2f",ort);
	
	
	
	
}
float diziort(float istdizi[],float dizi_el_sy)   //float cinsinde dizinin elemanlarının ortalamasını alan fonksiyon.Diziismi,Dizinin eleman sayısı
{	
	int b;
    float bellek,ort;
	for(b=0;b<dizi_el_sy;b++)
	{
		bellek=istdizi[b]+bellek;
	}
    return bellek/dizi_el_sy;
}
