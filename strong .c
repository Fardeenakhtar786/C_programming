#include<stdio.h>
int take()
{
	int t;
	printf("\nEnter any integer: ");
	scanf("%d",&t);
	return t;
}
int fact(int n)
{
	long int f=1;
	while(n>=2)
	{
		f=f*n;
		n--;
	}
	return f;
}
 
 int sum_digit(int y)
 {
 	int s=0,d;
 	while(y>0)
 	{
 		d=y%10;
 		s=s+fact(d);
 		y/=10;
	 }
	 return s;
 }
  int main()
  {
  	int num;
  	num=take();
  	(sum_digit(num)==num)?printf("\n%d is strong number",num):
  		printf("\n%d is not strong number",num);
  		return 0;
  }
