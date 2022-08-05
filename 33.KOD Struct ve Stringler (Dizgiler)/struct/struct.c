#include <stdio.h>	
#include <stdlib.h>						
#include <conio.h>				//"struct" kullanmak i�in  birden fazla bilginin oldu�u(tutuldu�u tek bir bilgi) tipi tan�mlar				



typedef enum
{
	bay,       //0                 //enum cinsinden cinsiyet nesnesi tan�mlad�.enumlar in�ine tan�mlanan i�erik d���nda de�er almazlar yani (bay ve bayan) d���nda
	bayan      //1                   enum lar  dizi gibi s�ras�yla say� de�erleri al�r              
}cinsiyet;
typedef enum
{
	pazartesi,       //0                  enum lar  dizi gibi s�ras�yla say� de�erleri al�r   ekrana bast�r�ld�klar�nda bu de�erleri yans�t�r
	sali,            //1
	carsamba,        //2
	persembe,        //3
	cuma,            //4
	cumartesi,       //5
	pazar,           //6
}tatilgunu;

typedef struct
{                               //yeni olu�turdu�muz insan cinsine; 
   int yas;                     //int cinsinden ya� nesnesi tan�mlad�k
   char *isim;                  //char cinsinden isim adl� pointer tan�mlad�k
   cinsiyet c;                  //cinsiyet cinsinde c nesnesi tan�mlad�k.enumuneit
   tatilgunu tg;                 //tatilgunu cinsinde tg nesnesi tan�mlad�k.enumuneit
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
	printf("\nAlinin cinsiyeti : %u",ali.c);                //enuminate ler unsign say�lar oldu�u i�in %u ile bast�r�l�r
	printf("\nAlinin tatil gunu : %u",ali.tg);
	printf("\nAli emekli mi? : %d",emeklimi(&ali));              //cuma atand��� i�in 4 d�nderir
	
	insan *veli;
	veli=(insan*)malloc(sizeof(insan)*3);                   //veli pointeri i�in insan tipinde, 3 insan nesnesi boyutu yer kaplayacak kadar haf�zada yer ay�r
	veli->yas=60;                                         //enumineterlarda pointerlere de�er atamas�nda nokta yerine -> i�areti kullan�l�r
	veli->c=bay;
	veli->tg=pazar;	
	
	printf("\n\nVelinin yasi : %d",veli->yas);
	printf("\nVelinin cinsiyeti : %u",veli->c);
	printf("\nVelinin tatil gunu : %u",veli->tg);
	printf("\nVeli emekli mi? : %d",emeklimi(veli)); 
	
	
	
	getch();
	return 0;
}
