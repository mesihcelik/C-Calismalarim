#include <stdio.h>
#include <conio.h>

int main()
{
	char isim[20];
	char *soyisim;
	soyisim=(char*)malloc(sizeof(char)*9);          //char cinsinden, 20 tane charýn  karakterinin kaplayacaðý alaný bellekte ayýr	
	printf("ismin ne?\n"); 
	scanf("%s",isim);               //stringler %s ile çalýþýr
	scanf("%s",soyisim);   
	printf("Tanistigime memnun oldum %s %s",isim,soyisim); 	
	
	printf("\n\nisim ve soyismin 3. Harfleri %c ve %c",isim[2],soyisim[2]);         //diziler 0 dan baþlar
	
	getch();
	return 0;
}
