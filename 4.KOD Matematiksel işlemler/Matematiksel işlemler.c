#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	int b;
	int c=3,d=7;
	
	a=c+d;
	b=d-c;
	
	printf("c = %d",c);
	
	printf("\nd = %d",d);
	
	printf("\nc+d = %d",a);
	
	printf("\nd-c = %d",b);
	//farkl� yaz�m
	printf("\nc*d = %d",c*d);           //   * �arpa operat�r�
	
	printf("\nc/d = %d",c/d);           //   / b�lme operat�r�
	
    c+=5;               // += operat�r� solundaki de�i�kene sa�daki de�eri ekle anlam�ndad�r. Yani c=c+5
	d-=5;               // -= operat�r� solundaki de�i�kene sa�daki de�eri ��kar anlam�ndad�r. Yani d=d+5
	
	printf("\n%d",c);
	
	printf("\n%d",d);
	
	getch();
	return 0;
}
