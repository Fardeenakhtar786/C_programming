/*WAP to take input from the user and then check whether the integer is
even or odd */

#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter Any Integer: ");
	scanf("%d",&num);
	if(num%2==0)
	printf("\n%d is an Even Number",num);
	else
	printf("\n%d is an Odd number",num);
	return 0;
}
