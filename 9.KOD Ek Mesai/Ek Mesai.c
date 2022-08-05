#include <stdio.h>
#include <conio.h>
/*Bir þirketiçalýþanlarýna, fazla mesai ücreti ödemektedir. Sizden ücreti hesaplayan bir program yazmanýz isteniyor.
  Programýn özellikleri aþaðýdaki sþekildedir.
  -10 saate kadar saat baþýna 500 lira
  -10 ile 20 saat arasýnda, saat baþýna 300 lira
  -20 saatten sonrasý için, saat 200 lira
  -yýllýk maksimum mesai 80 saat'i aþamaz. 
*/
int main(){
	int sa;
	int mestut;
	
	printf("Lutfen yapmak istediginiz mesai saatini giriniz.\n");
	scanf("%d",&sa);
	
	if(sa<=10){
		mestut=sa*500;
		printf("%d saat yapacaginiz fazladan mesai ile alacaginiz ek mesai ucreti %d tl'dir",sa,mestut);
	}else if(sa<20)
	{
		mestut=(sa-10)*300+5000;
		printf("%d saat yapacaginiz fazladan mesai ile alacaginiz ek mesai ucreti %d tl'dir",sa,mestut);
	}else if(sa<=80)
	{
		mestut=(sa-19)*200+7700;
		printf("%d saat yapacaginiz fazladan mesai ile alacaginiz ek mesai ucreti %d tl'dir",sa,mestut);
	}else
	{
		printf("Yillik toplam fazladan mesai 80 saati asamamaktadir.80 saatlik fazladan mesai ucreti 19900 tl'dir.",sa,mestut);
	}
	
	getch();
	return 0;
}
