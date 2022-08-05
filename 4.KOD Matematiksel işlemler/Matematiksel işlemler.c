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
	//farklý yazým
	printf("\nc*d = %d",c*d);           //   * çarpa operatörü
	
	printf("\nc/d = %d",c/d);           //   / bölme operatörü
	
    c+=5;               // += operatörü solundaki deðiþkene saðdaki deðeri ekle anlamýndadýr. Yani c=c+5
	d-=5;               // -= operatörü solundaki deðiþkene saðdaki deðeri çýkar anlamýndadýr. Yani d=d+5
	
	printf("\n%d",c);
	
	printf("\n%d",d);
	
	getch();
	return 0;
}
