#include <stdio.h>
#include <conio.h>

int main()
{
	int a[10];                    //a[] int tipinde 10 Elemanl�k tek boyuzlu bir dizi.Haf�zada yer ayr�lmas� i�ini dizinin boyutu girimelidir veya b[] gibi eleman say�s� yaz�lmay�p direk eleman de�erleri yaz�larak da kullan�labilir
    int b[]={2,5,3,4,8,13,-7};
    printf("%d\n\n\n\n",b[5]);    
	int i;                        // dizilerde her kutu haf�zada bir yer kaplar ve ayr� ayr� �a��r�labilir
	
	for(i=0;i<10;i++)          
	{                             //diziler 0 de�erinden ba�lar
		a[i]=i;                   //a ' ininci eleman�na i de�erini ata
		printf("-%d-",a[i]);      //a ' n�n i 'inci de�erini ekrana bas 
	}
	                               //d�ng� bitti�inde haf�zadaki g�r�nt� 1 2 3 4 5 6 7 8 9  �eklinde olur. yani a[0]=1 , a[1]=2, a[2]=3, a[3]=4, a[4]=5, a[5]=6, a[6]=7, a[7]=8, a[8]=9 �eklinde de�er al�r.
	getch();
	return 0;
}
