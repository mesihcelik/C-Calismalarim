#include <stdio.h>
#include <conio.h>
//standart harf notu belirleme
int main()
{
	printf("Lutfen aldiginiz harf notunu giriniz ve ENTER tusuna basiniz...\n");
	float anot;
	scanf("%f",&anot);
	
	if(anot<35)
	{
		printf("Alinan Harf Notu : FF");
	}else if(anot<45)
	{
		printf("Alinan Harf Notu : DD");
	}else if(anot<50)
	{
		printf("Alinan Harf Notu : DC");
	}else if(anot<55)
	{
		printf("Alinan Harf Notu : CC");
	}else if(anot<63)
	{
		printf("Alinan Harf Notu : CB");
	}else if(anot<71)
	{
		printf("Alinan Harf Notu : BB");
	}else if(anot<80)
	{
		printf("Alinan Harf Notu : BA");
	}else if(anot<=100)
	{
		printf("Alinan Harf Notu : AA");
	}else
	{
		printf("Harf notu hesaplanamadi.Lutfen deger dogru bir deger giriniz!!!");
	}
	
	getch();
	return 0;
}
