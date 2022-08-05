#include <stdio.h>
#include <conio.h>

int main()
{
	int a=5;
	{
		int a=7;
		printf("\n ic block yazilan printf komutu : %d",a);
	}
    printf("\n dis block yazilan printf komutu : %d",a);
    getch();
    return 0;
}
//iki tane a deðiþken deðeri tanýmlanmýþtýr. Deðiþken deðer önceliði ilk olarak block içerisindekine aittir.
