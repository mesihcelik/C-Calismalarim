#include <stdio.h>
#include <conio.h>

int fact(int);                             //fact�riyel almak i�im int tipte tek de�i�kenli, int tipte tek sonu� veren fonk tan�mland�
int comb(int,int);                         //combinasyon fonksiyonu i�in int tipte  iki de�i�kenli, bir int sonu� veren fonk tan�mlad�k 
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
	return fact(x)/(fact(y)*fact(x-y));          //return komutu ile fonksiyon ��k���nda yans�t�lacak de�er d�nderilir d�nder                           
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
