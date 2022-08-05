#include <stdio.h>
#include <conio.h>

int fact(int);                             //factöriyel almak içim int tipte tek deðiþkenli, int tipte tek sonuç veren fonk tanýmlandý
int comb(int,int);                         //combinasyon fonksiyonu için int tipte  iki deðiþkenli, bir int sonuç veren fonk tanýmladýk 
int main()
{
	int x,y;
	printf("Iki sayi giriniz:\n");
	scanf("%d%d",&x,&y);
	printf("%d degerinin %d ile kombinasyonu %d degerine esittir.",x,y,comb(x,y));
	getch();
}
int comb(int x,int y)                        //C(n,r)=n!/(r!(n-r)!)
{
	return fact(x)/(fact(y)*fact(x-y));          //return komutu ile fonksiyon çýkýþýnda yansýtýlacak deðer dönderilir dönder                           
}
int fact(int x)
{
	int sonuc=1;
	int i;
	for(i=1;i<=x;i++)
	{
		sonuc*=i;
	}
	
	return sonuc;
}
