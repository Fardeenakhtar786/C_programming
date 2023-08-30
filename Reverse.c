/*WAP to take input of any integer from the user and then print its
Reverse */

#include<stdio.h>
int main()
{
	int num,digit,reverse=0,dup;
	printf("\nEnter any integer: ");
	scanf("%d",&num);
	dup=num;
	while(num!=0)
	{
		digit=num%10;
		reverse=reverse*10+digit;
		num/=10;
	}
	printf("\nReverse of %d is %d",dup,reverse);
	return 0;
}
