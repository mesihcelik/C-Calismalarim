#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	int b=5;
	int c=2;
	
	printf("\n%d",a=b+c<<2);      // a değişkenini b ve c nin toplamına eşitle ardından binarry(ikilik değerini) iki sola kaydır ve yaz.  binary 0000 0111=7, işlem sonrası sola kayım 0001 1100 = 20  olur.
	printf("\n%d",a=b+c>>2);      // a değişkenini b ve c nin toplamına eşitle ardından binarry(ikilik değerini) iki sağa kaydır ve yaz.  binary 0000 0111=7, işlem sonrası sağa kayım 0000 0001 = 1 . 11 tanımsız alana geçmiş olur.
    printf("\n%d",a=b&c);         // & operatörü ve and mantık kapısıdır. ikilik sistemde her basamağı true ve false olarak algılar sonucu and kapısına göre yansıtır.  b = 0101 =5 and c = 0010 =2 yapılırsa a = 0000 = 0 
    printf("\n%d",a=b|c);         // & operatörü ve or mantık kapısıdır. ikilik sistemde her basamağı true ve false olarak algılar sonucu and kapısına göre yansıtır.  b = 0101 =5 or c = 0010 =2 yapılırsa a = 0111 = 7
    printf("\n%d",b=b|c&3);       // b = 0101 =5 or c = 0010 =2  and  3 = 0011    and öncelikidir. 1.adım  b = 0101 =5 or 0010 =2   2.adım 0111 = 7
    
	getch();
    return 0;
}
