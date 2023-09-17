/*WAP to take input of any integer and then print its Fibonacci series*/

#include<stdio.h>
int main()
{
	int f=0,s=1,n=0,st;
	printf("\nEnter the starting value: ");
	scanf("%d",&st);
	while(n<=st)
	{
		printf("\n%d",n);
		n=f+s;
		s=f;
		f=n;
	}
	return 0;
}
