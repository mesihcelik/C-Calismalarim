#include <stdio.h>
#include <conio.h>

int main()
{
	char isim[20];
	char *soyisim;
	soyisim=(char*)malloc(sizeof(char)*9);          //char cinsinden, 20 tane char�n  karakterinin kaplayaca�� alan� bellekte ay�r	
	printf("ismin ne?\n"); 
	scanf("%s",isim);               //stringler %s ile �al���r
	scanf("%s",soyisim);   
	printf("Tanistigime memnun oldum %s %s",isim,soyisim); 	
	
	printf("\n\nisim ve soyismin 3. Harfleri %c ve %c",isim[2],soyisim[2]);         //diziler 0 dan ba�lar
	
	getch();
	return 0;
}
