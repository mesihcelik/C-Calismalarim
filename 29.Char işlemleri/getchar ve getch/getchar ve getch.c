#include <stdio.h>
#include <conio.h>

int main()
{
	char a; 
	
	printf("getchar fonksiyon kontrol.once karaktere ardindan ENTER'e bas\n");     
	a = getchar();
	printf("okunan karakter: ");
	printf("%c",a);
	
	printf("\n\n\ngetche fonksiyon kontrol.getch ENTER'e ihtiyac duymadan oto devreye girer.Karaktere bas\n");
	a = getche();
	printf("\nokunan karakter: ");
	printf("%c",a);
	
	
	
	
	
	
	getch();
}
