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
//iki tane a de�i�ken de�eri tan�mlanm��t�r. De�i�ken de�er �nceli�i ilk olarak block i�erisindekine aittir.
