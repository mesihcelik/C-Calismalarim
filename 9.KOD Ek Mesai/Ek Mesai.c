#include <stdio.h>
#include <conio.h>
/*Bir �irketi�al��anlar�na, fazla mesai �creti �demektedir. Sizden �creti hesaplayan bir program yazman�z isteniyor.
  Program�n �zellikleri a�a��daki s�ekildedir.
  -10 saate kadar saat ba��na 500 lira
  -10 ile 20 saat aras�nda, saat ba��na 300 lira
  -20 saatten sonras� i�in, saat 200 lira
  -y�ll�k maksimum mesai 80 saat'i a�amaz. 
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
