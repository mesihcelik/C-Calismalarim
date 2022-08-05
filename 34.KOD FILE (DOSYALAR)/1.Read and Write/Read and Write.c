#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *outfile, *infile;                    //FILE cinsinden outfile ve inputfile pointerleri oluþturuyoruz
	int b=5,f;                                 //int cinsinde b ve f nesneleri tanýmlanýp b nin içeriðine 5 deðeri atanmýþ
	float a=13.72,c=6.68,e,g;                  //float cinsinden a,c,e ve g nesneleri tanýmlanýp a ve c nesnelerine içerik tanýmlanmýþ
	
	
	outfile=fopen("testdata.txt","w");         //fopen komutu ile testdata.txt dosyasý w operatörü ile write modunda açýlmýþ ve outfile pointerine eþitlenmiþ (dosya yoksa bu komutla kendi yaratýr)
	fprintf(outfile,"%f %d %f",a,b,c);         //fprintf komutu ile (txt ile eþlenen outfile lý belirterek) a,b,c deðerleri dosyanýn içine basýldý.
	fclose(outfile);                           //fclose komutu ile dosya kapandý
	
	
	infile=fopen("testdata.txt","r");          //fopen komutu ile testdata.txt dosyasý r operatörü ile read modunda açýlmýþ ve infile pointerine eþitlenmiþ
	fscanf(infile,"%f %d %f",&e,&f,&g);        //fscanf komutu (txt ile eþlenen infile lý belirterek) txt nin içindeki deðerleri e,f ve g nin adreslerinin içerik bölümüne atamýþtýr 
	printf("%f      %d      %f \n",a,b,c);     //belirtilen içerikleri ekrana bastýrma
	printf("%f      %d      %f \n",e,f,g);     //belirtilen içerikleri ekrana bastýrma
	
	getch();
	return 0;
}
