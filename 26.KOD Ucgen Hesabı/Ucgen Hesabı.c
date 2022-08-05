#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.14159265358979                                     //define ile algoritmada kullanýlmak üzere sabit deðerler atanabilmektedir 

float sinteo(float,float,float);
float costeo(float,float,float);

int main()
{
	float aci1,aci2,aci3,knr1,knr2,knr3,knrtpyr,alan,cosa1,cosa2,cosa3,sinorn;

	printf("              3.Aci\n               /\\ \n              /  \\ \n             /    \\ \n            /      \\ \n           /        \\ \n  1.Kenar /          \\ 2.Kenar \n         /            \\ \n        /              \\ \n       /                \\ \n      /                  \\ \n     /__ __ __ __ __ __ __\\ \n2.Aci        3.Kenar       1.Aci     "  );
    printf("\n\nVerileri yukaridaki ucgeni baz alarak giriniz.Bilmediginiz verilere '0' yaziniz.\n");
    printf("\n1.Kenar degerini giriniz.\n");
	scanf("%f",&knr1);
	printf("\n2.Kenar degerini giriniz.\n");
	scanf("%f",&knr2);
	printf("\n3.Kenar degerini giriniz.\n");
	scanf("%f",&knr3);
	printf("\n1.Aci degerini giriniz.\n");
	scanf("%f",&aci1);
	printf("\n2.Aci degerini giriniz.\n");
	scanf("%f",&aci2);
	printf("\n3.Aci degerini giriniz.\n");
	scanf("%f",&aci3);

	if(aci1==0||aci2==0||aci3==0)                               //teoremler için eðer iki açý biliniyorsa üçüncüyü otomatik bulma
	{
		if(aci2!=0&&aci3!=0)
		aci1=180-aci2-aci3;
		if(aci1!=0&&aci3!=0)
		aci2=180-aci1-aci3;
		if(aci1!=0&&aci2!=0)
		aci3=180-aci1-aci2;
	}

	if(knr1==0&&knr2!=0&&knr3!=0)                                //cosinüs teoremi üçgende uygulama
	{
		knr1=costeo(aci1,knr2,knr3);
	}else if(knr1!=0&&knr2==0&&knr3!=0)
	{
		knr2=costeo(aci2,knr1,knr3);
	}else if(knr1!=0&&knr2!=0&&knr3==0)
	{
		knr3=costeo(aci3,knr1,knr2);                         
	}
	
	if(knr1!=0&&knr2==0&&knr3==0)                              //sinüs teoremi üçgende uygulama
	{
		knr2=sinteo(knr1,aci1,aci2);
		knr3=sinteo(knr1,aci1,aci3);
	}
	else if(knr1==0&&knr2!=0&&knr3==0)
	{
		knr1=sinteo(knr2,aci2,aci1);
		knr3=sinteo(knr2,aci2,aci3);
	}
	else if(knr1==0&&knr2==0&&knr3!=0)
	{
		knr1=sinteo(knr3,aci3,aci1);
		knr2=sinteo(knr3,aci3,aci2);
	}
	
	knrtpyr=(knr1+knr2+knr3)/2;	                               //kenarlarýn toplamýnýn yarýsý
	cosa1=(knr2*knr2+knr3*knr3-knr1*knr1)/(2*knr2*knr3);
	cosa2=(knr1*knr1+knr3*knr3-knr2*knr2)/(2*knr1*knr3);
	cosa3=(knr1*knr1+knr2*knr2-knr3*knr3)/(2*knr1*knr2);
	aci1=acos(cosa1)*180/PI;
	aci2=acos(cosa2)*180/PI;
	aci3=acos(cosa3)*180/PI;
    
    if(aci1+aci2+aci3<=180.001&&aci1+aci2+aci3>=179.799&&knr1!=0&&knr2!=0&&knr3!=0)      //cosinüslü iþlemlerde her zaman mini sapmalar olur. Bu sebeple tam 180 yerine aralýk alýndý.
    {
    	if(knr1<knr2+knr3&&knr2<knr1+knr3&&knr3<knr1+knr2)
    	{
    		printf("\nUcgenin alani : %.2f birim karedir", sqrt(knrtpyr*(knrtpyr-knr1)*(knrtpyr-knr2)*(knrtpyr-knr3)));
	        printf("\n1.Kenar= %.2f birim \n2.Kenar= %.2f birim \n3.Kenar= %.2f birim",knr1,knr2,knr3);
	        printf("\n1.Aci= %.2f derece \n2.Aci= %.2f derece \n3.Aci= %.2f derece",aci1,aci2,aci3);
	        printf("\ncos(%.2f)= %.2f \ncos(%.2f)= %.2f \ncos(%.2f)= %.2f",aci1,cosa1,aci2,cosa2,aci3,cosa3);
		}
		else{
			printf("\n\nGirdiginiz veriler hatali veya hesaplamanin gerceklesmesi icin yeterle degil. Lutfen kontrol ediniz!!!");
		}   	
	}else
	printf("\n\nGirdiginiz veriler hatali veya hesaplamanin gerceklesmesi icin yeterle degil. Lutfen kontrol ediniz!!!");

	getch();
	return 0;
	
}
float sinteo(float sk1,float siaci1,float siaci2)                          //sinüs teoremi ile kenar bulma fonksiyonu
{
	float sinorn;
	sinorn=sk1/sin(siaci1*PI/180);
	return sin(siaci2*PI/180)*sinorn;
}
float costeo(float coaci3,float ck1,float ck2)                             //kosinüs teoremi ile kenar bulma fonksiyonu
{
	return sqrt((ck1*ck1)+(ck2*ck2)-(2*ck1*ck2*cos(coaci3*PI/180)));
}

