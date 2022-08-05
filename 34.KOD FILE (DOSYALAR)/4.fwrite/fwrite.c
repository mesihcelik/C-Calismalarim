#include <stdio.h>
#include <conio.h>

int main()
{
	char a[10]={'1','2','3','4','5','6','7','8','9','a'};
	FILE *fs;
	fs=fopen("project.txt","w");
	fwrite(a,1,10,fs);              //fwrite komutu ile fs pointerine a dizisini her döngüde 1 defa yaz 10 karater yaz 
	fclose(fs);
	
	getch();
	return 0;
}
