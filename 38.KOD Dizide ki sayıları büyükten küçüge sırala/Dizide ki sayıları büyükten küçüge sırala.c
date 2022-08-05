#include <stdio.h>
#include <conio.h>
void sirala(int a,int b[]);
int main()
{
	int i,a=9;
	int ak[]={7,5,9,1,2,4,3,6,8};
	sirala(a,ak);
	for(i=0;i<9;i++)
	{
		printf("%d ",ak[i]);
	}
	getch();
	return 0;
}
void sirala(int a,int b[])
{
	int s,t;
	int hafiza=b[0];
	for(s=0;s<a-1;s++)
	{
		for(t=s+1;t<a;t++)
		{
			if(b[s]>b[t])
			{
		        hafiza=b[s];
		    	b[s]=b[t];
			    b[t]=hafiza;
			}
		}	
	}
}
