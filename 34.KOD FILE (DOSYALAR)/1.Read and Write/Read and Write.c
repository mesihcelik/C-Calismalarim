#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *outfile, *infile;                    //FILE cinsinden outfile ve inputfile pointerleri olu�turuyoruz
	int b=5,f;                                 //int cinsinde b ve f nesneleri tan�mlan�p b nin i�eri�ine 5 de�eri atanm��
	float a=13.72,c=6.68,e,g;                  //float cinsinden a,c,e ve g nesneleri tan�mlan�p a ve c nesnelerine i�erik tan�mlanm��
	
	
	outfile=fopen("testdata.txt","w");         //fopen komutu ile testdata.txt dosyas� w operat�r� ile write modunda a��lm�� ve outfile pointerine e�itlenmi� (dosya yoksa bu komutla kendi yarat�r)
	fprintf(outfile,"%f %d %f",a,b,c);         //fprintf komutu ile (txt ile e�lenen outfile l� belirterek) a,b,c de�erleri dosyan�n i�ine bas�ld�.
	fclose(outfile);                           //fclose komutu ile dosya kapand�
	
	
	infile=fopen("testdata.txt","r");          //fopen komutu ile testdata.txt dosyas� r operat�r� ile read modunda a��lm�� ve infile pointerine e�itlenmi�
	fscanf(infile,"%f %d %f",&e,&f,&g);        //fscanf komutu (txt ile e�lenen infile l� belirterek) txt nin i�indeki de�erleri e,f ve g nin adreslerinin i�erik b�l�m�ne atam��t�r 
	printf("%f      %d      %f \n",a,b,c);     //belirtilen i�erikleri ekrana bast�rma
	printf("%f      %d      %f \n",e,f,g);     //belirtilen i�erikleri ekrana bast�rma
	
	getch();
	return 0;
}
