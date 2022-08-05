#include <stdio.h>
#include <conio.h>

int main(){
	int a;
    int b;
    int c;
    
    printf("Artarda ve rastgele ucgene ait kenar uzunluklarini giriniz.");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a>b&&a>c)
	{
	    if(c*c+b*b==a*a)
          	{
     		printf("\na, b, c, kenarlarina sahip ucgen 30,60,90 ucgenidir.\nUcgenin alani %d birim karedir.",c*b/2);
        	}else{
         	printf("\na, b, c, kenarlarina sahip ucgen 30,60,90 ucgeni degildir.");
         	}
	}else if(c>b&&c>a)
	{
		if(a*a+b*b==c*c)
          	{
     		printf("\na, b, c, kenarlarina sahip ucgen 30,60,90 ucgenidir.\nUcgenin alani %d birim karedir.",a*b/2);
        	}else{
         	printf("\na, b, c, kenarlarina sahip ucgen 30,60,90 ucgeni degildir.");
         	}
	}else
	{
		if(a*a+c*c==b*b)
          	{
     		printf("\na, b, c, kenarlarina sahip ucgen 30,60,90 ucgenidir.\nUcgenin alani %d birim karedir.",c*a/2);
        	}else{
         	printf("\na, b, c, kenarlarina sahip ucgen 30,60,90 ucgeni degildir.");
         	}
	}
	
    getch();
}
