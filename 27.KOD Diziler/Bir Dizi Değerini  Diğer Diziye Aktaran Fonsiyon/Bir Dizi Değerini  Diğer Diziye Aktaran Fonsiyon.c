#include <stdio.h>
#include <conio.h>

int main()
{
	float aktarilacak[]={1,2,3,4,5,6,7,8,9}; 
	float aktarilan[9];
	memcpy(aktarilan,aktarilacak,sizeof(aktarilacak));
	
	
	printf("aktarilma testi :%.2f",aktarilan[7]);  
}

