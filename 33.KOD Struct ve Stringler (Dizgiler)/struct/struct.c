#include <stdio.h>	
#include <stdlib.h>						
#include <conio.h>				//"struct" kullanmak için  birden fazla bilginin olduðu(tutulduðu tek bir bilgi) tipi tanýmlar				



typedef enum
{
	bay,       //0                 //enum cinsinden cinsiyet nesnesi tanýmladý.enumlar inçine tanýmlanan içerik dýþýnda deðer almazlar yani (bay ve bayan) dýþýnda
	bayan      //1                   enum lar  dizi gibi sýrasýyla sayý deðerleri alýr              
}cinsiyet;
typedef enum
{
	pazartesi,       //0                  enum lar  dizi gibi sýrasýyla sayý deðerleri alýr   ekrana bastýrýldýklarýnda bu deðerleri yansýtýr
	sali,            //1
	carsamba,        //2
	persembe,        //3
	cuma,            //4
	cumartesi,       //5
	pazar,           //6
}tatilgunu;

typedef struct
{                               //yeni oluþturduðmuz insan cinsine; 
   int yas;                     //int cinsinden yaþ nesnesi tanýmladýk
   char *isim;                  //char cinsinden isim adlý pointer tanýmladýk
   cinsiyet c;                  //cinsiyet cinsinde c nesnesi tanýmladýk.enumuneit
   tatilgunu tg;                 //tatilgunu cinsinde tg nesnesi tanýmladýk.enumuneit
}insan;
int emeklimi(insan *birey)
{
	if(birey->c==bay&&birey->yas>55)
	    return 1;
	if(birey->c==bay&&birey->yas>50)
	    return 1;
	
	return 0;
}

int main()
{
	int a;
	insan ali;
	ali.yas=30;
	ali.c=bay;
	ali.tg=cuma;
	printf("Alinin yasi : %d",ali.yas);
	printf("\nAlinin cinsiyeti : %u",ali.c);                //enuminate ler unsign sayýlar olduðu için %u ile bastýrýlýr
	printf("\nAlinin tatil gunu : %u",ali.tg);
	printf("\nAli emekli mi? : %d",emeklimi(&ali));              //cuma atandýðý için 4 dönderir
	
	insan *veli;
	veli=(insan*)malloc(sizeof(insan)*3);                   //veli pointeri için insan tipinde, 3 insan nesnesi boyutu yer kaplayacak kadar hafýzada yer ayýr
	veli->yas=60;                                         //enumineterlarda pointerlere deðer atamasýnda nokta yerine -> iþareti kullanýlýr
	veli->c=bay;
	veli->tg=pazar;	
	
	printf("\n\nVelinin yasi : %d",veli->yas);
	printf("\nVelinin cinsiyeti : %u",veli->c);
	printf("\nVelinin tatil gunu : %u",veli->tg);
	printf("\nVeli emekli mi? : %d",emeklimi(veli)); 
	
	
	
	getch();
	return 0;
}
