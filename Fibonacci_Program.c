			/*Fibonacci series program*/

#include<stdio.h>
int main()
{
	int f=0,s=1,n=0;
	while(n<=13)
	{
		printf("\n%d",n);
		n=f+s;
		s=f;
		f=n;
	}
	return 0;
}
