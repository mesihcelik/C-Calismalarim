#include <stdio.h>
#include <conio.h>

int fib(int);          //Fibonacci Dizisi, her sayýnýn kendisinden bir önceki sayý ile toplanmasý ile elde edilen sayýlar serisidir.
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",fib(x-1));
	getch();
}
int fib(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
